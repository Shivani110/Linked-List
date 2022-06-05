class Link:
	def __init__(self, n):
		self.n = n
		self.nxt = None

class Link_List:
	def __init__(self):
		self.h = None
	def listprint(self):
		p = self.h
		while (p):
			print(p.n)
			p = p.nxt

if __name__=='__main__':
	L_list = Link_List()

	L_list.h = Link(100)
	two = Link(200)
	three = Link(300)

	L_list.h.nxt = two;
	two.nxt = three;

	L_list.listprint()
