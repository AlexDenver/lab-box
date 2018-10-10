data()
?mtcars
names(mtcars)
attach(mtcars)

cov(mpg, hp)
cor(mpg, carb)

cor(mpg, mtcars$n)
print(class(mtcars$n));
x = names(mtcars[, 2:ncol(mtcars)]);
print(x)

z = c(1:5)
length(z)

for(n in x){
  print(cat("mpg &",n,cov(mpg,mtcars[[n]])));
}


class()



cov(mpg, cyl)
cor(mpg, cyl)

cov(cyl, disp)
cor(cyl, disp)





z=c(1:5,NA)
is.na(z)


z=
length(z)

# REMOVING EMPTY DATA COMPLETELY
tele_data = read.csv("./Missing_Value_Telecom.csv")
is.na(tele_data)
removed_na = na.omit(tele_data)


#FILLING MISSING DATA WITH MEAN/MEDIAN/MAX/MIN
cmusage = mean(tele_data$Current.Month.s.Usage, na.rm = TRUE)
l3musage = mean(tele_data$Last.3.Month.s.Usage, na.rm = TRUE)
avgrchg = mean(tele_data$Average.Recharge, na.rm = TRUE)

tele_data$Current.Month.s.Usage = cmusage
tele_data$Current.Month.s.Usage[is.na(tele_data$Current.Month.s.Usage)] = cmusage
tele_data$Last.3.Month.s.Usage[is.na(tele_data$Last.3.Month.s.Usage)] = l3musage
tele_data$Average.Recharge[is.na(tele_data$Average.Recharge)] = avgrchg
#TABLE_NAME $ COL_NAME [COL_NAME  TEST CONDITION] = NEW VALUE



