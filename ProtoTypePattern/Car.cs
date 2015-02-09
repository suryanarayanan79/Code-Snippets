using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProtoTypePattern
{
    class Car : IAutoMobile, ICloneable
    {
        public Car(string name) {
            Name = name;
        }

        public string Name
        {
            get;
            private set;
        }

        public bool onOffState
        {
            get;
            private   set;
        }

        public float Speed
        {
            get;
            set;
        }

        public void Accelerate()
        {
            System.Console.WriteLine("Accelerate Car");
        }

        public void Break()
        {
            System.Console.WriteLine("Break Car");
        }

        public void Horn()
        {
            System.Console.WriteLine("Horn Car");
        }

        public void StartStopEngine(bool onOff)
        {
            System.Console.WriteLine("OnOff Car");
            onOffState = onOff;
        }

        public object Clone()
        {
            return this.MemberwiseClone();
        }
    }
}
