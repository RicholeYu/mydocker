FROM node:latest
RUN mkdir -p /mnt/app
# Create app directory
WORKDIR /var/node

# Install app dependencies
COPY package.json /mnt/app
RUN npm install

# Bundle app source
COPY  . /mnt/app

EXPOSE 3000
CMD [ "npm", "start" ]