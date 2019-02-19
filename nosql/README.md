## Lab One

#### Query Structure
> db.COLLECTION_NAME.find({\<QUERY>}, {\<COLUMNS>}, {\<OPTIONS>})


#### Basic Queries
```javascript
db.inventory.find()
db.inventory.find( {} , {_id: false} )
db.inventory.find( {} , {item: true, qty: true, status: true} )
db.inventory.find( {} , {item: true, qty: true, status: true} )
db.inventory.find( {} , {item: true, qty: true, "size.uom": true} )
db.inventory.find( {} , {item: true, qty: true, "size.uom": true, _id: false})
db.inventory.find({status: 'A'})
db.inventory.find({qty: {$lte: 75}})
```

#### And Operations.

```javascript
db.inventory.find( {
    $and: [ 
            { qty: { $gte: 75 } },  
            { qty: { $lt: 100 } }
        ]         
})

db.inventory.find( {
    $and: [ 
            { price: { $gte: 100 } },  
            { price: { $lt: 450 } }
        ]  
})
```

#### Not Operations.
```javascript
db.inventory.find( {
    status: { 
        $not: {$eq: 'P'} 
    }
})

db.inventory.find( {
    qty: { 
        $not: {$eq: 100} 
    }
})

```



## Lab Two

#### IN, NIN Operation
```javascript
db.items.find({ 
    qty: {
        $in: [15, 20, 25]
    }
})
db.items.find({ 
    qty: {
        $nin: [15, 20, 25],
        $exists: true
    }
})

```

#### EXISTS Operation
```javascript
db.items.find({ 
    qty: {
        $in: [15, 20, 25],
        $exists: true
    }
})
```

#### Remove Operation

```javascript
db.items.remove(
    {
        "item.name": 'cd'
    }, {
        justOne: true
    }
)
```


#### Update Operation

```javascript
db.items.update(
    {},{ 
        $set: { 
            price: 100, 
            sales: true 
        }
    }, {
        multi: true
    }
)
```