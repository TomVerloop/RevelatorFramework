#include "Layer.hpp"

Layer::Layer()
{
	Chunks = new ChunkManager();
}

Layer::~Layer()
{

}


void Layer::Update(UpdateData * updateobject)
{
	
	Chunks->Update(updateobject);
}

void Layer::Draw(sf::RenderWindow & window, sf::Vector2f offset)
{

	Chunks->Draw(window,offset);
}


bool Layer::hasTransaction()
{
	return (transaction != nullptr);
}

ScreenTransaction * Layer::getTransaction()
{
	return transaction;
}