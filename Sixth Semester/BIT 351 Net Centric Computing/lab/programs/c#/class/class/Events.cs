//using System;

//// 1. The Publisher class
//public class AlarmSystem
//{
//    // Define an event based on a delegate
//    public event Action? OnAlarmTriggered;

//    public void TriggerAlarm()
//    {
//        Console.WriteLine("AlarmSystem: Triggering alarm...");
//        // Raise the event if there are any subscribers
//        OnAlarmTriggered?.Invoke();
//    }
//}

//// 2. The Subscriber class
//public class SecurityGuard
//{
//    public void RespondToAlarm()
//    {
//        Console.WriteLine("SecurityGuard: Responding to the alarm immediately!");
//    }
//}

//class Program
//{
//    static void Main()
//    {
//        AlarmSystem alarm = new AlarmSystem();
//        SecurityGuard guard = new SecurityGuard();

//        // 3. Subscribe the guard's method to the event
//        alarm.OnAlarmTriggered += guard.RespondToAlarm;

//        // 4. Publisher raises the event
//        alarm.TriggerAlarm();
//    }
//}