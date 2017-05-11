using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using cliwrapper;

namespace csharpcppinvokesample
{
    class Program
    {
        static void Main(string[] args)
        {
            cliwrapper.wrapper sample;
            sample = new cliwrapper.wrapper();
            String input;
            while (true)
            {
                input = Console.ReadLine();
                Console.WriteLine(sample.Eval(input));
            }
        }
    }
}
