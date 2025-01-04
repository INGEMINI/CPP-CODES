package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	fmt.Println("enter name")
	//var name string
	//fmt.Scan(&name)
	//fmt.Println("hi my name is ", name)

	reader := bufio.NewReader(os.Stdin)
	name, _ := reader.ReadString('\n')
	fmt.Println("hello ,", name)
}
