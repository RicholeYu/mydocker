package main

import (
    "time"
)

func main ()  {
    ticker := time.NewTicker(time.Millisecond * 1000 * 60 * 60)
    for t := range ticker.C {
        t = t
    }
}
