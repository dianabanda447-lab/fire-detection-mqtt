# Sistem inteligent de detectare a incendiilor – MQTT (simulare)

Repository pentru proiectul sincretic: sistem inteligent de detectare a incendiilor.

## Conținut
- `publisher.c` – simulează clientul embedded (publisher) care generează valori de senzori și “publică” logic pe topic-uri MQTT
- `subscriber.c` – simulează clientul receptor (subscriber) care “primește” un mesaj și îl salvează ca istoric

## Topic-uri (conceptual)
- `fire/sensors/temperature`
- `fire/sensors/smoke`
- `fire/sensors/flame`
- `fire/status/alarm`

## Observație
Comunicarea MQTT este prezentată logic (simulare), pentru demonstrarea arhitecturii publish–subscribe.
