class Test{
	 public static int lineUp(String args)
	 {
		int result =0,count=0;
		for (int i=0;i<args.length ;i++ ) {
			if(args[i]=='L' || args[i] == 'R')
				count++;
			if(args[i] == 'A')
				count+=0;
			if(count%2==0)
				result++;
		}
		return result;
	}
	public static void main(String[] args){
		string commands = "LLARL";
		System.out.println(lineUp(commands));
	}
}
