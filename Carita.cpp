#include "pch.h"
#include "Carita.h"


Carita::Carita() {
	x = 25;
	alto=ancho=40;
	puntaje= 0;
	Random r;
	dx = r.Next(0, 10);
	color = r.Next(0, 6);
	System::Threading::Thread::Sleep(10);
}
//TODO Ubicar al inicio



Carita::~Carita(){}
void Carita::dibujarInicio(){
	x = 25;
	Random valor;
	dx = valor.Next(6, 14);
	System::Threading::Thread::Sleep(10);


}
void Carita::dibujar(Graphics^ g){
	//panel->DrawEllipse(Pens::Cyan, x, y, ancho, alto);
	g->FillEllipse(asignarColor(), x, y, ancho, alto);
	g->DrawString(puntaje.ToString(), gcnew Font("Arial", 10), Brushes::Black, x + 10, y + 10);
}
void Carita::mover(){
	x += dx;
}
void Carita::setX(int x){
	this->x = x;
}
void Carita::setY(int y){
	this->y = y;
}
void Carita::setPuntaje(){
	puntaje++;
}
int Carita::getPuntaje(){
	return puntaje;
}
Rectangle Carita::obtenerArea(){
	return Rectangle(x, y, ancho, alto);
}
Brush^ Carita::asignarColor(){
	switch (color)
	{
	case 1: return Brushes::Red;		break;
	case 2: return Brushes::Orange;		break;
	case 3: return Brushes::Yellow;		break;
	case 4: return Brushes::Blue;		break;
	case 5: return Brushes::Green;		break;
	case 6: return Brushes::Violet;		break;
	}
}


/*

	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			carrera = new Carrera();
			panel = this->CreateGraphics();
			timer1->Enabled = true;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timer1;
	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		Carrera* carrera;
		Graphics^ panel;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			//
			// timer1
			//
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			//
			// Form1
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(659, 368);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Form1_Paint);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		carrera->moverFiguras();
		carrera->dibujarFiguras(panel);
		if (carrera->obtenerNumeroCarrera() == 4) {
			timer1->Enabled = false;
			(gcnew FormRanking(carrera))->ShowDialog();
		}
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Form1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		carrera->dibujarFiguras(panel);
	}

	};
}

*/