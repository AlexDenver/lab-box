kings=c(60,43,67,50,56,42,50,65,68,43,65,34,47,34,49,41,13,35,53,56,16,43,69,
        59,48,59,86,55,68,51,33,49,67,77,81,67,71,81,68,70,77,56)
length(kings)
mean(kings)
kingstimeseries=ts(kings)
kingstimeseries
plot.ts(kingstimeseries)
# From R data
data()
AirPassengers
class(AirPassengers)
length(AirPassengers)
plot.ts(AirPassengers)
# Smoothing for Kings data set
install.packages("TTR")
library(TTR)
#Simple moving average consider interval as 3
sma3=SMA(kingstimeseries,3)
sma3
err=kingstimeseries-sma3
err
sse=err*err
sse
sse[is.na(sse)]=0
MSE=mean(sse)
MSE

#Simple moving average consider interval as 5

sma3=SMA(kingstimeseries,5)
sma3
err=kingstimeseries-sma3
err
sse=err*err
sse
sse[is.na(sse)]=0
MSE=mean(sse)
MSE

#Simple moving average consider interval as 7

sma3=SMA(kingstimeseries,7)
sma3
err=kingstimeseries-sma3
err
sse=err*err
sse
sse[is.na(sse)]=0
MSE=mean(sse)
MSE

#Using simple average do the smoothing
