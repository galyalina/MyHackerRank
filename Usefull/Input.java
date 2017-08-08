   //Num of tests + one int + line of integers     
        
        Scanner scan = new Scanner(System.in);
        int testCases = scan.nextInt();
        //System.out.print("Num of testCases  " + testCases+"\n");
   
        while(testCases-->0){
            ArrayList<Integer> chocolates = new ArrayList<Integer>();
            int numOfColleagues  = scan.nextInt();
            //System.out.print("Num of colleagues  " + numOfColleagues+"\n");
            scan.nextLine();
            
            String strLine = scan.nextLine();
            String[] input = strLine.split(" ");
            for(int i = 0; i < input.length; i++){
                Integer x = Integer.parseInt(input[i]);
                chocolates.add(x);            
            }
            //System.out.println(chocolates);
            //System.out.print("\n");
        }
