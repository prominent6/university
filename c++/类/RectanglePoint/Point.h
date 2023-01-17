class Point{
	public:
		void initPoint(float x=0,float y=0){
			this->x=x;
			this->y=y;
		}
		void move(float offx,float offy){
			x+=offx;
			y+=offy;
		}
		float getX(){
			return x;
		}
		float getY(){
			return y;
		}
	private:
		float x,y;
}; 
