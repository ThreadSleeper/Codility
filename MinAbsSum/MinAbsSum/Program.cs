using System;

namespace MinAbsSum
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
        }

    }

// you can also use other imports, for example:
// using System.Collections.Generic;

// you can write to stdout for debugging purposes, e.g.
// Console.WriteLine("this is a debug message");

class Solution
    {
        public int solution(int[] a)
        {
            if (a.Length == 0) return 0;
            if (a.Length == 1) return a[0];
            int sum = 0;
            for (int i = 0; i < a.Length; i++)
            {
                sum += Math.Abs(a[i]);
            }
            int[] indices = new int[a.Length];
            indices[0] = 0;
            int half = sum / 2;
            int localSum = Math.Abs(a[0]);
            int minLocalSum = Int32.MaxValue;
            int placeIndex = 1;
            for (int i = 1; i < a.Length; i++)
            {
                if (localSum < half)
                {
                    if (Math.Abs(2 * minLocalSum - sum) > Math.Abs(2 * localSum - sum))
                        minLocalSum = localSum;
                    localSum += Math.Abs(a[i]);
                    indices[placeIndex++] = i;
                }
                else
                {
                    if (localSum == half)
                        return Math.Abs(2 * half - sum);

                    if (Math.Abs(2 * minLocalSum - sum) > Math.Abs(2 * localSum - sum))
                        minLocalSum = localSum;
                    if (placeIndex > 1)
                    {
                        localSum -= Math.Abs(a[indices[placeIndex--]]);
                        i = indices[placeIndex];
                    }
                }
            }
            return (Math.Abs(2 * minLocalSum - sum));

        }
    }
}
