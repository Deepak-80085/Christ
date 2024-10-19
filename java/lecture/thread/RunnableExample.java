class HelloRunnable implements Runnable{
    public void run()
        {
            System.out.println("hello from runnable");

        }
    

}

public class RunnableExample
{
    public static void main(String[] args) {
        Thread thread =new Thread(new HelloRunnable());
        thread.start();
    }
}