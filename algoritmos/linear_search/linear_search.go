package main

func LinearSearch(vec []int, target int) int {
	for index, data := range vec {
		if data == target {
			return index
		}
	}
	return -1
}

func main() {
	arr := make([]int, 10)
	for index, _ := range arr {
		arr[index] = index + 1
	}
	result := LinearSearch(arr, 10)
	println(result)
}
