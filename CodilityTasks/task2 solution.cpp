        public int solution(int[] A)
        { int number = 0;
            bool exceeded = false;
            for (int i = 1; i < A.Length && !exceeded; i++)
            {
                if (A[i - 1] - A[i] > 0)
                {
                    number += A[i - 1] - A[i];
                    if (number > 1e9) exceeded = true;
                }
            }

            number += A[A.Length];

            if (number > 1e9)
                exceeded = true;
            if (exceeded)
                return -1;
            return number;
        }