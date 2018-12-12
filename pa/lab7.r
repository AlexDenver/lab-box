install.packages("e1071")
library(e1071)
data("iris")
iris
names(iris)
attach(iris)
range(Sepal.Length)
range(Sepal.Width)
range(Petal.Length)
range(Petal.Width)
model=naiveBayes(Species~Sepal.Width Sepal.Length,data=iris)
?naiveBayes
model
sample=data.frame(Sepal.Length=6,Sepal.Width=3,Petal.Length=5,Petal.Width=1.5)
predict(model,sample)


AirPassengers
Air=AirPassengers
Air
Airts=ts(Air)
Airts
plot(Airts)
decAir=decompose(Air)
plot(decAir)
abline(reg=lm(AirPassengers~time(AirPassengers)))
plot(aggregate(AirPassengers,FUN = mean))