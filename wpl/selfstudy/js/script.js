names = ["Obieluem", "Kalvin", "Aidian", "Samarjit", "Trai", "Jayke", "Zachery", "Kody", "Reynold", "Teo", "Ian", "Aulay", "Thumbiko", "Kendall", "Timothy", "LLeyton", "Sephiroth", "Muzammil", "Mitch", "Loui", "Finn", "Preston-Jay", "Kiaran", "Sethu", "Spencer"];
var postBox = $('#posts');

function post(title,content) {
  if(!localStorage.getItem('posts'))
    localStorage.setItem('posts',0);
  date = new Date();
  month = ['Jan', 'Feb', 'Mar', 'Apr', 'May', 'Jun', 'Jul', 'Aug', 'Sep', 'Oct', 'Nov', 'Dec'];
  date =  date.getDate()+'-'+month[date.getMonth()]+' '+date.getHours()+':'+date.getMinutes();
  usn = names[Math.floor(Math.random()*names.length)];
  title = '';
  var data = {
    date: date,
    content: content,
    title: '',
    usn: usn
  };
  postHtml = preparePost(data);
  postBox.append(postHtml);
  ar = JSON.parse(localStorage.getItem('posts'));
  console.log(typeof(ar));
  console.log(ar);
  console.log([]);
  if(typeof(ar)==typeof([])){
    ar.push(data)
    posts = JSON.stringify(ar);

  } else {
    console.log("going else");
    ar = [data];
    posts = JSON.stringify(ar);
  }
  localStorage.setItem('posts', posts);
}
function putPosts() {
  posts = localStorage.getItem('posts')

  if(posts = JSON.parse(posts)){
    console.log(posts);
    posts.forEach(function(ele){
      postHtml = preparePost(ele);
      postBox.append(postHtml);
    });
  }else{
    postBox.append("<p class='text-center text-secondary'>No Posts To Show.</p>")
  }
}
putPosts();
function preparePost(ele) {
  return postHtml = `<a href="#" class="list-group-item list-group-item-action flex-column align-items-start ">
  <div class="d-flex w-100 justify-content-between">
  <!--<h5 class="mb-1">${ele.title}</h5>-->
  <small>${ele.date}</small>
  </div>
  <p class="mb-1">${ele.content}</p>
  <small>--${ele.usn}.</small>
  </a>`;
}
$(document).ready(function() {
  $('form').on('submit', function(e) {
    e.preventDefault();
    content = $('#content').val();
    post('', content);
  });

});
