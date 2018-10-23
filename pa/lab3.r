install.packages('MASS')
data("AirPassengers")
?AirPassengers
?hist
?c

hist(AirPassengers, main="Air Passengers",
     xlab = "Passengers",
     border = "blue",
     col = c("red", "blue", "green"),
     xlim = c(50,800),
     ylim = c(10, 20),
     las= 2,
     breaks =2,
     freq=TRUE)

hist(AirPassengers, xlim = c(200, 500), breaks = 4)
lines(density(AirPassengers))


help(MASS)
library(MASS)
help(survey)
mean(survey$NW.Hnd, na.rm="T")

?attach

hist(survey$Wr.Hnd)
lines(density(survey$Wr.Hnd))

boxplot(survey$Height, survey$Sex, horizontal = TRUE, color)


ozone <- airquality$Ozone
temp <- airquality$Temp
boxplot(
        ozone, temp,
        main = "Multiple boxplots for comparision",
        names = c("ozone", "temp"),
        las = 2,
        col = c("orange","red"),
        border = "brown",
        horizontal = TRUE
)




?boxplot


counts <- table(mtcars$gear)
barplot(counts, main="Car Distribution", xlab="Number of Gears")


?barplot
