
public class BitwiseOperator {
	public static void main(String[] args) {
		int a, b;
		
		System.out.println(" Please Enter two integer Value: ");
		a = 2;
		b = 5;
		
		System.out.format(" Bitwise AND Operator: %d & %d = %d \n", a, b, a & b);
		System.out.format(" Bitwise OR Operator: %d | %d = %d \n", a, b, a | b);
		System.out.format(" Bitwise EXCLUSIVE OR: Operator %d ^ %d = %d \n", a, b, a ^ b);
		System.out.format(" Bitwise NOT Operator: ~%d = %d \n", a, ~a);
		
		System.out.format(" LEFT SHIFT Operator: %d << 1 = %d \n", a, a << 1);
		System.out.format(" RIGHT SHIFT Operator: %d >> 1 = %d \n", b, b >> 1);
	}
}

