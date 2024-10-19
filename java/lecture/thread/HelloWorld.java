
class HelloThread extends Thread {

    public void run() {
        System.out.println("Hell"+Thread.currentThread().getName());
    }
}

public class HelloWorld{
    public static void main(String[] args)
    {
        HelloThread t1=new HelloThread();
        t1.start();
    }
}