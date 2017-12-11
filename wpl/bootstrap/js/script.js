document.cookie = "name=denver";
function formatCard(title, body){
	return "<div class='col-sm-4 col-lg-2  card'><div class='title'><h3>"+title+"</h3></div><div class='body'><ul><li>"+body+"</li></ul></div></div>";
}
cards = [{
	title: 'New Card',
	body: 'Content AXA'
},{
	title: 'New Card',
	body: 'Content AXB'
},{
	title: 'New Card',
	body: 'Content AXC'
},{
	title: 'New Card',
	body: 'Content AXD'
},{
	title: 'New Card',
	body: 'Content AXE'
},{
	title: 'New Card',
	body: 'Content'
},{
	title: 'New Card',
	body: 'Content'
},{
	title: 'New Card',
	body: 'Content'
}];
c = $('#cards');

cards.forEach(function(d,i){
	c.append(formatCard(d.title+' '+(i+1),d.body));
});

$('#search').on('input', function(e){
	x = search(e.target.value.toString());
	c.html('');
	x.forEach(function(d,i){
		c.append(formatCard(d.title+' '+(i+1),d.body));
	});
});

function search(q){
	x = Array();
	cards.forEach(function(d){
		r = JSON.stringify(d).toLowerCase().match(q);
		if(r!=null){
			x.push(d);
		}
	});
	return x;
}