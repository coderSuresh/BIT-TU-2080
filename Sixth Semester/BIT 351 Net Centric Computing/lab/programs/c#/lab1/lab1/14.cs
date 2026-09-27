//using System;

//class Alarm
//{
//    public delegate void AlarmHandler();
//    public event AlarmHandler OnAlarmTriggered;

//    public void Trigger()
//    {
//        Console.WriteLine("Alarm Triggered!");
//        OnAlarmTriggered?.Invoke();
//    }
//}

//class Logger
//{
//    public void LogAlarm()
//    {
//        Console.WriteLine("Logging alarm to system.");
//    }
//}

//class Notifier
//{
//    public void SendNotification()
//    {
//        Console.WriteLine("Sending notification to user.");
//    }
//}

//class Program
//{
//    static void Main()
//    {
//        Alarm alarm = new Alarm();
//        Logger logger = new Logger();
//        Notifier notifier = new Notifier();

//        alarm.OnAlarmTriggered += logger.LogAlarm;
//        alarm.OnAlarmTriggered += notifier.SendNotification;

//        alarm.Trigger();

//        Console.WriteLine("Suresh Dahal - 23");
//    }
//}