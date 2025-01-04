package main

import "fmt"

func func1() {
	fmt.Println("1st func ")
}

func add(a, b int) int {
	return a + b
}

func main() {
	fmt.Println("hi")
	func1()
	//add(3, 4)
	fmt.Println(add(2, 3))
}
