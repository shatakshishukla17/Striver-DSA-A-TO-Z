
//Question:https://www.geeksforgeeks.org/problems/while-loop-printtable-java/1

class WhileLoop {
	 static void printTable (int n) 
	 {
            int multiplier=10;
            while(multiplier>0)
            {
                //Your code here
                System.out.print(n*multiplier+" ");
                multiplier--;
            }
       System.out.println();
	 }

}