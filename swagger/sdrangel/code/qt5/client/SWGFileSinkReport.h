/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.14.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGFileSinkReport.h
 *
 * FileSink
 */

#ifndef SWGFileSinkReport_H_
#define SWGFileSinkReport_H_

#include <QJsonObject>



#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGFileSinkReport: public SWGObject {
public:
    SWGFileSinkReport();
    SWGFileSinkReport(QString* json);
    virtual ~SWGFileSinkReport();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGFileSinkReport* fromJson(QString &jsonString) override;

    qint32 getSpectrumSquelch();
    void setSpectrumSquelch(qint32 spectrum_squelch);

    float getSpectrumMax();
    void setSpectrumMax(float spectrum_max);

    qint32 getSinkSampleRate();
    void setSinkSampleRate(qint32 sink_sample_rate);

    qint32 getChannelSampleRate();
    void setChannelSampleRate(qint32 channel_sample_rate);

    qint32 getRecording();
    void setRecording(qint32 recording);

    qint32 getRecordTimeMs();
    void setRecordTimeMs(qint32 record_time_ms);

    qint64 getRecordSize();
    void setRecordSize(qint64 record_size);

    qint32 getRecordCaptures();
    void setRecordCaptures(qint32 record_captures);


    virtual bool isSet() override;

private:
    qint32 spectrum_squelch;
    bool m_spectrum_squelch_isSet;

    float spectrum_max;
    bool m_spectrum_max_isSet;

    qint32 sink_sample_rate;
    bool m_sink_sample_rate_isSet;

    qint32 channel_sample_rate;
    bool m_channel_sample_rate_isSet;

    qint32 recording;
    bool m_recording_isSet;

    qint32 record_time_ms;
    bool m_record_time_ms_isSet;

    qint64 record_size;
    bool m_record_size_isSet;

    qint32 record_captures;
    bool m_record_captures_isSet;

};

}

#endif /* SWGFileSinkReport_H_ */
