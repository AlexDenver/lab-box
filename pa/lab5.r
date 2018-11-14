datax = read.csv("./Missing_Value_Telecom.csv")
cmusage = datax$Current.Month.s.Usage
musage_mean = mean(cmusage, na.rm = TRUE )
cmusage[is.na(cmusage)] = musage_mean

lmusage = datax$Last.3.Month.s.Usage
lmusage_mean = mean(lmusage, na.rm = TRUE )
lmusage[is.na(lmusage)] = lmusage_mean

avgrch = datax$Average.Recharge
avgrch_mean = mean(avgrch, na.rm = TRUE )
avgrch[is.na(avgrch)] = avgrch_mean
cleanData = cbind(datax$SL.No., cmusage, lmusage,avgrch,datax$Projected.Growth)
write.csv(file = "./Missing_Value_Clean.csv" ,cleanData)




mydata = merge(myprofile, myusage, by = “ID”)
mydata = rbind(class1, class2)