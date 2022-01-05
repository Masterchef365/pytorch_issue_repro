image_name=torchscript-rust-docker-image
container_name=torchscript-rust-docker

if ! docker inspect $image_name &>/dev/null; then
    docker build -t $image_name - < Dockerfile
fi

args="$@"
if [ "$args" = "" ]; then
    args="bash"
fi

if [ "$(docker ps | grep $container_name)" ]; then
    echo "Docker container $container_name already running, reusing..."
    docker exec -it $container_name $args
else
    echo "Docker container $container_name not running, starting..."
    docker run --rm -it --gpus all -v $PWD:/cwd -w /cwd --name $container_name $image_name $args
fi
