package main

import "fmt"

func divide(a, b float64) float64 {
	return a / b
}

func main() {
	fmt.Println("see my division skills")
	num := divide(10, 3)
	fmt.Println("division of 2 no is", num)

}
