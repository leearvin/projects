from django.db import models

# Create your models here.
class BlogPost(models.Model):
	title = models.ChaerField(max_length=150)
	body = models.TextField()
	timestamp = models.DateTimeField()