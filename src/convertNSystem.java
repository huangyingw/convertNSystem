import java.util.Stack;

public class convertNSystem {
	static private Stack<Integer> stack = new Stack<Integer>();

	static void Transform(int num, int N) {
		do {
			stack.push(num % N);
			num = (num / N);
		} while (num >= N);
		stack.push(num % N);
	}

	static int TransformWithRec(int num, int N) {
		if (num < N) {
			return num;
		} else {
			return TransformWithRec(num / N, N) * 10 + num % N;
		}
	}

	public static void main(String arg[]) {
		int num, N;
		num = 236;
		N = 8;

		Transform(num, N);
		while (!stack.isEmpty()) {
			System.out.print(stack.pop());

		}
		System.out.println();
		System.out.println(TransformWithRec(num, N));
	}
}
