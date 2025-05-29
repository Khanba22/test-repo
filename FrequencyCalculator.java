import java.util.HashMap;
class FrequencyCalculator<T> {
    HashMap<T, Integer> freq = new HashMap<>();

    public void calculateFrequency(T[] items) {
        for (T item : items) {
            freq.put(item, freq.getOrDefault(item, 0) + 1);
        }
    }

    public void printFrequency() {
        for (T item : freq.keySet()) {
            System.out.println(item + ": " + freq.get(item));
        }
    }
}