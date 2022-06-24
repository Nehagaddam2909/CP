class MyData
{
    int data;
    boolean flag=true;
    synchronized void set(int v)
    {
        if(flag!=true)
        try
        {
            wait();
        }
        catch(Exception e)
        {
            
        }
        
        data=v;
        flag=false;
        notify();
    }
    synchronized int get()
    {
        int x;
        if(flag!=false)
        try
        {
            wait();
        }
        catch(Exception e)
        {
            
        }
        
        x=data;
        flag=true;
        notify();
        
        return x;
    }
}

class Producer extends Thread
{
    MyData d;
    Producer(MyData dat)
    {
		d=dat;
	}
	public void run()
	{
		int count=1;
		while(true){
			d.set(count);
			System.out.println("Producer:"+count);
			count++;
		}
	}

}

class Consumer extends Thread
{
    MyData d;
    Consumer(MyData dat)
    {
		d=dat;
	}
	public void run()
	{
		while(true){
			System.out.println("Consumer:"+d.get());
		}
	}

}

class Test
{
    public static void main(String args[])
    {
        MyData data1=new MyData();
		Producer p=new Producer(data1);
		Consumer co=new Consumer(data1);
		p.start();
		co.start();

    }
}