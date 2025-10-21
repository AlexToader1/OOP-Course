import java.time.LocalDateTime
import java.time.LocalTime
import java.time.Duration

class DateTimeDisplay {
    init {
        val currentDateTime = LocalDateTime.now()
        println("Current date and time: $currentDateTime")

        val endOfDay = currentDateTime.toLocalDate().atTime(LocalTime.MAX)
        val hoursLeft = Duration.between(currentDateTime, endOfDay).toHours()
        println("Hours left until end of day: $hoursLeft")
    }
}

fun main() {
    val display = DateTimeDisplay()
}

//outputul este pe compiler online :) 
