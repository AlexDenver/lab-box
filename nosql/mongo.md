## Lab One

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

#### Write a MongoDB query to display all the inventory with quantity greater than or equal to 75 and less than 100.

```
db.inventory.find( {
    $and: [ 
            { qty: { $gte: 75 } },  
            { qty: { $lt: 100 } }
        ]         
})
```

#### Write a MongoDB query to display all the inventory which does not have status "P".
```
db.inventory.find( {
    status: { 
        $not: {$eq: 'P'} 
    }
})
```

