package main

import "fmt"

/*func main() {
	x := 10
	if x > 5 {
		fmt.Println("x is grt than 5")
	}
}
*/

/*func main() {
	day := 1
	switch day {

	case 1:
		fmt.Println("mon")

	case 2:
		fmt.Println("tue")
	case 3:
		fmt.Println("wed")
	default:
		fmt.Println("nonono")
	}
}
*/

// go has only for..no while or do while
// range will give index and value of an array

/*func main() {
	data := "git hub"
	for index, value := range data {
		//fmt.Println(index, value)
		//fmt.Printf("%d  %c", index, value)
		fmt.Printf("%d  %c", index, value)
	}
}
*/

/*
map is like dict in python
func main() {
	sd := make(map[string]int)
	sd["mahi"] = 19
	sd["riya"] = 20
	fmt.Println(sd["mahi"])

	delete(sd, "riya")
	fmt.Println(sd["riya"])
	grade, exist := sd["riya"]
	fmt.Println(exist)
	fmt.Println(grade)

}
*/

/*type name struct {
	fname string
	lname string
	age   int
}

func main() {
	var tiya name
	tiya.fname = "tiya"
	tiya.lname = "kapoor"
	tiya.age = 20
	fmt.Println(tiya)

}*/

func main() {
	var num int
	num = 3
	var ptr *int
	ptr = &num
	fmt.Println(num)
	fmt.Println(*ptr)
	fmt.Println(ptr)
	fmt.Println(&num)
	//default value of ptr=nil

}

//defer keyword works as lifo type ie execution of the last function will be first
