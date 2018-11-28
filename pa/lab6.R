################################
##########LAB TEST 2############
################################
# Multiple Regression Prediction
# Logistic Regression for Prediction
# Time Series Forecasting
# Naive Bayes for Classification
# K - Nearest Neighbour for Classification


resortData =  read.csv('./Resort_Visit.csv')

visit = resortData$Resort_Visit
income = resortData$Family_Income
attitude = resortData$Attitude.Towards.Travel
importance = resortData$Importance_Vacation
size = resortData$House_Size
age = resortData$Age._Head
xvisit = factor(visit)

cor(resortData)

aggregate(income ~ visit, FUN = mean)
aggregate(attitude ~ visit, FUN = mean)
aggregate(income ~ visit, FUN = mean)
aggregate(importance ~visit, FUN = mean)
aggregate(size ~visit, FUN = mean)
aggregate(age ~visit, FUN = mean)

mean(visit, income)


?glm
