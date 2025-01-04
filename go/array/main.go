package main

import "fmt"

func main() {
	fmt.Println("array demo")
	var name [5]string

	name[0] = "prince"
	name[1] = "akash"
	fmt.Println("name is", name)

	var num = [5]int{1, 2, 3}
	fmt.Println("array is", num)

	var price [5]int
	fmt.Println("price is", price)

	var p [5]string
	p[0] = "hello"
	p[1] = "hi ji"
	fmt.Println("p is", p)

	var pq [5]string
	pq[0] = "helo"
	pq[1] = "hi ji"
	fmt.Printf("p is %q", pq)

	var pqr [5]string
	pqr[0] = "helo"
	pqr[1] = "hi ji"
	fmt.Printf("p is %s", pqr)

}
