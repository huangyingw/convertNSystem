import java.util.Stack;

public class convertNSystem {
	static private Stack<Integer> stack = new Stack<Integer>();

	static int Transform(int num, int N) {
		int result = 0;
		while (num / N > 0) {
			stack.push(num % N);
			num /= N;
		}
		stack.push(num % N);

		while (!stack.isEmpty()) {
			result *= 10;
			result += stack.pop();
		}
		return result;
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

		System.out.println(Transform(num, N));
		System.out.println(TransformWithRec(num, N));
	}
}
