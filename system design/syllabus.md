Phase 1 - System Design Fundamentals

This phase lays the foundation of system design by starting extremely small (a
system for a single user) and gradually understanding where complexity
naturally emerges.

. How Internet works and DNS Magic
. The Request Response Cycle and Server Client Architecture
· Designing a system for ONE user and gradually scaling to 10 users
. Understanding the Application Layer and Data Layer
· Problems when going from just ONE user to 10 users.

Phase 2 - Scaling to Thousands of Users & Beyond

Now that we've handled the basics, next phase is all about handling traffic,
concurrency, and distribution. This is where your systems need to stop being
"toy projects" and start acting like production-grade architectures.

· Application-level scaling (horizontal vs vertical)
· Data-layer scaling (sharding and replication)
. Microservices and Monolith Architecture - trade-offs and pitfalls
· Single points of failure and system bottlenecks
· Consistency in distributed systems (CAP theorem in real life)
. Caching 101

Phase 3 - Synchronous & Asynchronous Patterns

Now that we know about scalings and caching, let's understand the most
important thing that makes your system robust and scale to millions of users.

. The Sync and Async Programming Patterns
· Async Patterns in Microservice Architecture
· Async Processing Patterns: queues, pub/sub, and event-driven designs.
· Message Queues : single vs distributed queues, priority handling.
· Pub/Sub vs Event Driven vs Queues : When to use what?
· Fan-Out Architectures: scaling event-driven systems.
. CQRS - Command Query Responsibility Segregation

Phase 4 - From Local Development to Production

Until now, everything runs on localhost and this is the phase where things get
to start serious. The "Money" part gets involved here, and this is where your
system design can decide if you are going to have a Pizza party this weekend
or not.

. Cloud infrastructures - AWS, Digital Ocean, etc.
. CDNs (Content Delivery Networks) - bringing data closer to users.
. Load Balancers and traffic distribution
. Understanding meaning behind CPU and Memory.
. Cost related to CPUs and Memory.
. Virtual Private Clouds (VPCs)
. Public IP and Private IP addressing
. Bad Boys do DDoS
. When to Scale Out and Scale In?

Phase 5 - Database Architecture & Design

Databases are the heart of any system. They determine scalability, reliability,
and performance.

. What is a Database really is?
· Why not just use files?
. Relational vs non-relational databases
. Key-Value Stores : simplicity at speed.
. Choosing the Right Database
. The paradigm shift toward real-time databases

Phase 6 - Cloud Native System Design [AWS]

In this phase, we will be discussing core AWS services which helps you to scale
your system with managed service. No, AWS is not sponsoring us for this as of
now, Maybe in future.

. Core AWS Services
. AWS EC2, ECS, and Lambda : compute at scale.
. RDS, DynamoDB, and Aurora : managed database options.
. API Gateway + Load Balancers : managing traffic in the cloud.
. S3 and CloudFront : storage + global content delivery.
. Monitoring and Observability using CloudWatch

Phase 7 - Real-time Systems Design

System design varies significantly based on application requirements. This
phase focuses on real-time systems such as video conferencing and live
streaming platforms like zoom and discord.

. TCP vs UDP and why WebRTC uses UDP
. WebRTC vs traditional socket-based communication
. Common WebRTC architectural patterns
. Peer-to-peer vs MCU vs SFU architectures
· System design of an SFU (Mediasoup)
. How live streaming works: YouTube Live, RTMP, OBS, and FFmpeg

Phase 8 - Architecting Al-Powered Systems

Al is the new protein, You just find it everywhere, but not sure what to do with
it?

. RAG Pipelines
. Large context management strategies
. Vector databases alongside traditional application databases
. Workflows Engines - The queue system for Al Applications
. Real-time Al applications, including voice-based Al systems


Phase 9 - Cracking System Design Interviews

This phase brings everything together. You will learn not only how to design
systems, but how to clearly communicate your decisions during interviews.

· System Design Interviews - mindset and strategy
· Authentication and Authorization (Google Zanzibar model)
. Classic Design Challenges
. Rate Limiter
. Consistent Hashing
. Key-Value Store
. URL Shortener
. YouTube, Netflix, and Hotstar system designs
. Hotel reservation systems and the double-booking problem