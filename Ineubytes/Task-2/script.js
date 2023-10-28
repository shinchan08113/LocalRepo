const apiKey = '39188469-1345aded6fcf671f52d688c06';

document.getElementById('search-button').addEventListener('click', () => {
    const searchTerm = document.getElementById('search-input').value;
    if (searchTerm) {
        searchImages(searchTerm);
    }
});

function searchImages(query) {
    const apiUrl = `https://pixabay.com/api/?key=${apiKey}&q=${encodeURIComponent(query)}`;

    fetch(apiUrl)
        .then(response => response.json())
        .then(data => {
            displayImages(data.hits);
        })
        .catch(error => {
            console.error('Error fetching data:', error);
        });
}

function displayImages(images) {
    const imageGrid = document.getElementById('image-grid');
    imageGrid.innerHTML = '';

    images.forEach(image => {
        const imageCard = document.createElement('div');
        imageCard.classList.add('image-card');
        const imageElement = document.createElement('img');
        imageElement.src = image.webformatURL;
        imageCard.appendChild(imageElement);
        imageGrid.appendChild(imageCard);
    });
}