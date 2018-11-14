a = (1:10)
b = (20:1)
print (c(1:20,20:1))

d = c(4,6,3)

data = read.csv('./newData.csv',)
plot(data$Distance, data$Stretch ) #, xlab = "Distance", ylab = "Stretch")

rep(c(4,6,3),10)



c( rep(c(4,6,3),10), 4)
c( rep(4,10), rep(6, 20), rep(3,30) )

attach(cars)

cor(cars$speed, cars$dist)
cor(cars$speed, cars$dist)

boxplot(cars, horizontal = TRUE)

M1 = lm(dist~speed)
M1
predict.lm(M1, data.frame(speed=50))
?predict
