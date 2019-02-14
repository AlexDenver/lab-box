## Lab One

#### Query Structure
db.COLLECTION_NAME.find({\<QUERY>}, {\<COLUMNS>}, {\<OPTIONS>})


#### Basic Queries
``` 
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

```
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
```
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

