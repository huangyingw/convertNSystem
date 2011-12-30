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

	static void TransformWithRec(int num, int N) {
		if (num < N) {
			System.out.print(num);
		} else {
			TransformWithRec(num / N, N);
			System.out.print(num % N);
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
		TransformWithRec(num, N);
		System.out.println();
	}
}
