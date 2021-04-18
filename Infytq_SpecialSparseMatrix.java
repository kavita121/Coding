//Special Sparse Matrix
//Infytq

import java.util.*;
import java.io.*;

public class code {
    public static void main(String args[]) {
        int i, j;
        // System.out.println("enter");
        Scanner sc = new Scanner(System.in);

        ArrayList<Integer> arr = new ArrayList<>();
        int total = 0;

        int m = sc.nextInt();

        String l = sc.nextLine();

        for(i=0; i<m; i++)
        {
            String ip = sc.nextLine();
            String[] s = ip.split(" ");
            for(String x: s)
            {
                arr.add(Integer.parseInt(String.valueOf(x)));
                total++; 
            }
              
        }
        sc.close();

        int n = total / m;

        int[][] matrix = new int[m][n];

        int rowSum[] = new int[m];
        int colSum[] = new int[n];

        int sum;

        int zeroCount = 0;

        int k = 0;
        // Read the matrix values
        for (i = 0; i < m; i++) {
            sum = 0;
            for (j = 0; j < n; j++) 
            {
                matrix[i][j] = arr.get(k);
                k++;
                if (matrix[i][j] == 0)
                    zeroCount++;
                sum += matrix[i][j];
            }
            rowSum[i] = sum;
        }


        for (i = 0; i < n; i++) {
            sum = 0;
            for (j = 0; j < m; j++) {
                sum += matrix[j][i];
            }
            colSum[i] = sum;

        }

        // when the spares matrix is a special matrix
        if (zeroCount >= (m * n - zeroCount)) 
        {
            for (i = 0; i < m; i++) 
            {
                for (j = 0; j < n; j++) 
                {
                    if (matrix[i][j] == 0) 
                    {
                        if (rowSum[i] <= colSum[j]) 
                        {
                            int x = rowSum[i] % 2;

                            if (x == 0)
                                x = 2;
                            rowSum[i] += x;
                            colSum[j] += x;
                            matrix[i][j] = x;
                            zeroCount--;
                            if (zeroCount < (m * n - zeroCount))
                                break;
                        } 
                        else 
                        {
                            int x = rowSum[i] % 3;
                            x = 3 - x;
                            rowSum[i] += x;
                            colSum[j] += x;
                            matrix[i][j] = x;
                            zeroCount--;

                            if (zeroCount < (m * n - zeroCount))
                                break;
                        }
                    }
                }
                if (zeroCount < (m * n - zeroCount))
                    break;
            }

            for (i = 0; i < m; i++) 
            {
                for (j = 0; j < n; j++)
                {
                    System.out.print(matrix[i][j]);
                    if(j<n-1)
                        System.out.print(" ");

                }
                if(i<m-1)
                    System.out.print("\n");
            }
        } 
        else 
        {
            System.out.print(-1);
        }

    }
}