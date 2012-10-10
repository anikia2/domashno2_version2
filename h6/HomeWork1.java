
public class HomeWork1 {
    public static void main (String[] args) {
	int i = (args.length)-1;
	
	if(args[i].equals("down")) {
		for ( i = (args.length - 1); i >= 0; i--){
			if(System.getProperty(args[i]) != null){
			System.out.println(System.getProperty (args[i]));
			}
		}
	}		
	else {
		for ( i = 0; i < args.length; i++){
		 	if(System.getProperty(args[i]) != null){
		 	System.out.println(System.getProperty (args[i]));
			}
		}
	}
   }
}
    

