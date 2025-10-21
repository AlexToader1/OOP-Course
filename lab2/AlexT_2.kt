class Motorbike(val brand: String, val model: String) {
    var year: Int = 0
    var color: String = "Unknown"
\
    constructor(brand: String, model: String, year: Int, color: String) : this(brand, model) {
        this.year = year
        this.color = color
    }
}

fun main() {
\
    val bike1 = Motorbike("Yamaha", "MT-07")
    println("Bike1: ${bike1.brand}, ${bike1.model}, Year: ${bike1.year}, Color: ${bike1.color}")
\
    val bike2 = Motorbike("Honda", "CBR600RR", 2022, "Red")
    println("Bike2: ${bike2.brand}, ${bike2.model}, Year: ${bike2.year}, Color: ${bike2.color}")
}