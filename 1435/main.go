package main

import "fmt"

func main() {
	var n int
	var i, j int
	for true {
		fmt.Scanf("%d", &n)
		if n == 0 {
			break
		}

		lh := n / 2
		if n%2 == 1 {
			lh++
		}

		a := 0
		b := n - 1

		arr := make([][]int, n)
		for l := 1; l <= lh; l++ {
			for i = a; i <= b; i++ {
				if arr[i] == nil {
					arr[i] = make([]int, n)
				}
				for j = a; j <= b; j++ {
					arr[i][j] = l
				}
			}
			a++
			b--
		}

		for i = 0; i < n; i++ {
			for j = 0; j < n; j++ {
				if j == 0 {
					fmt.Printf("  %d", arr[i][j])
				} else {
					fmt.Printf(" %3d", arr[i][j])
				}
			}
			fmt.Printf("\n")
		}
		fmt.Printf("\n")
	}
}
