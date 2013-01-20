#ifndef BCM2835_USB_REGS_H
#define BCM2835_USB_REGS_H

#define __DWC_OTG_REGS_H__
#define DWC_GLBINTRMASK		0x0001
#define DWC_DMAENABLE		0x0020
#define DWC_NPTXEMPTYLVL_EMPTY	0x0080
#define DWC_NPTXEMPTYLVL_HALFEMPTY	0x0000
#define DWC_PTXEMPTYLVL_EMPTY	0x0100
#define DWC_PTXEMPTYLVL_HALFEMPTY	0x0000
#define DWC_SLAVE_ONLY_ARCH 0
#define DWC_EXT_DMA_ARCH 1
#define DWC_INT_DMA_ARCH 2
#define DWC_MODE_HNP_SRP_CAPABLE	0
#define DWC_MODE_SRP_ONLY_CAPABLE	1
#define DWC_MODE_NO_HNP_SRP_CAPABLE		2
#define DWC_MODE_SRP_CAPABLE_DEVICE		3
#define DWC_MODE_NO_SRP_CAPABLE_DEVICE	4
#define DWC_MODE_SRP_CAPABLE_HOST	5
#define DWC_MODE_NO_SRP_CAPABLE_HOST	6

// union gotgctl_data
#define gotgctl_sesreqscs (1 << 0)
#define gotgctl_sesreq (1 << 1)
#define gotgctl_vbvalidoven (1 << 2)
#define gotgctl_vbvalidovval (1 << 3)
#define gotgctl_avalidoven (1 << 4)
#define gotgctl_avalidovval (1 << 5)
#define gotgctl_bvalidoven (1 << 6)
#define gotgctl_bvalidovval (1 << 7)
#define gotgctl_hstnegscs (1 << 8)
#define gotgctl_hnpreq (1 << 9)
#define gotgctl_hstsethnpen (1 << 10)
#define gotgctl_devhnpen (1 << 11)
#define gotgctl_reserved12_15_shift (12)
#define gotgctl_reserved12_15_mask (0xf)
#define gotgctl_conidsts (1 << 16)
#define gotgctl_dbnctime (1 << 17)
#define gotgctl_asesvld (1 << 18)
#define gotgctl_bsesvld (1 << 19)
#define gotgctl_otgver (1 << 20)
#define gotgctl_reserved1 (1 << 21)
#define gotgctl_multvalidbc_shift (22)
#define gotgctl_multvalidbc_mask (0x1f)
#define gotgctl_chirpen (1 << 27)
#define gotgctl_reserved28_31_shift (28)
#define gotgctl_reserved28_31_mask (0xf)

// union gotgint_data
#define gotgint_reserved0_1_shift (0)
#define gotgint_reserved0_1_mask (0x3)
#define gotgint_sesenddet (1 << 2)
#define gotgint_reserved3_7_shift (3)
#define gotgint_reserved3_7_mask (0x1f)
#define gotgint_sesreqsucstschng (1 << 8)
#define gotgint_hstnegsucstschng (1 << 9)
#define gotgint_reserved10_16_shift (10)
#define gotgint_reserved10_16_mask (0x7f)
#define gotgint_hstnegdet (1 << 17)
#define gotgint_adevtoutchng (1 << 18)
#define gotgint_debdone (1 << 19)
#define gotgint_mvic (1 << 20)
#define gotgint_reserved31_21_shift (21)
#define gotgint_reserved31_21_mask (0x7ff)

// union gahbcfg_data
#define gahbcfg_glblintrmsk (1 << 0)
#define DWC_GAHBCFG_GLBINT_ENABLE		1
#define gahbcfg_hburstlen_shift (1)
#define gahbcfg_hburstlen_mask (0xf)
#define DWC_GAHBCFG_INT_DMA_BURST_SINGLE	0
#define DWC_GAHBCFG_INT_DMA_BURST_INCR		1
#define DWC_GAHBCFG_INT_DMA_BURST_INCR4		3
#define DWC_GAHBCFG_INT_DMA_BURST_INCR8		5
#define DWC_GAHBCFG_INT_DMA_BURST_INCR16	7
#define gahbcfg_dmaenable (1 << 5)
#define DWC_GAHBCFG_DMAENABLE			1
#define gahbcfg_reserved (1 << 6)
#define gahbcfg_nptxfemplvl_txfemplvl (1 << 7)
#define gahbcfg_ptxfemplvl (1 << 8)
#define DWC_GAHBCFG_TXFEMPTYLVL_EMPTY		1
#define DWC_GAHBCFG_TXFEMPTYLVL_HALFEMPTY	0
#define gahbcfg_reserved9_20_shift (9)
#define gahbcfg_reserved9_20_mask (0xfff)
#define gahbcfg_remmemsupp (1 << 21)
#define gahbcfg_notialldmawrit (1 << 22)
#define gahbcfg_ahbsingle (1 << 23)
#define gahbcfg_reserved24_31_shift (24)
#define gahbcfg_reserved24_31_mask (0xff)

// union gusbcfg_data
#define gusbcfg_toutcal_shift (0)
#define gusbcfg_toutcal_mask (0x7)
#define gusbcfg_phyif (1 << 3)
#define gusbcfg_ulpi_utmi_sel (1 << 4)
#define gusbcfg_fsintf (1 << 5)
#define gusbcfg_physel (1 << 6)
#define gusbcfg_ddrsel (1 << 7)
#define gusbcfg_srpcap (1 << 8)
#define gusbcfg_hnpcap (1 << 9)
#define gusbcfg_usbtrdtim_shift (10)
#define gusbcfg_usbtrdtim_mask (0xf)
#define gusbcfg_reserved1 (1 << 14)
#define gusbcfg_phylpwrclksel (1 << 15)
#define gusbcfg_otgutmifssel (1 << 16)
#define gusbcfg_ulpi_fsls (1 << 17)
#define gusbcfg_ulpi_auto_res (1 << 18)
#define gusbcfg_ulpi_clk_sus_m (1 << 19)
#define gusbcfg_ulpi_ext_vbus_drv (1 << 20)
#define gusbcfg_ulpi_int_vbus_indicator (1 << 21)
#define gusbcfg_term_sel_dl_pulse (1 << 22)
#define gusbcfg_indicator_complement (1 << 23)
#define gusbcfg_indicator_pass_through (1 << 24)
#define gusbcfg_ulpi_int_prot_dis (1 << 25)
#define gusbcfg_ic_usb_cap (1 << 26)
#define gusbcfg_ic_traffic_pull_remove (1 << 27)
#define gusbcfg_tx_end_delay (1 << 28)
#define gusbcfg_force_host_mode (1 << 29)
#define gusbcfg_force_dev_mode (1 << 30)
#define gusbcfg_reserved31 (1 << 31)

// union grstctl_data
#define grstctl_csftrst (1 << 0)
#define grstctl_hsftrst (1 << 1)
#define grstctl_hstfrm (1 << 2)
#define grstctl_intknqflsh (1 << 3)
#define grstctl_rxfflsh (1 << 4)
#define grstctl_txfflsh (1 << 5)
#define grstctl_txfnum_shift (6)
#define grstctl_txfnum_mask (0x1f)
#define grstctl_reserved11_29_shift (11)
#define grstctl_reserved11_29_mask (0x7ffff)
#define grstctl_dmareq (1 << 30)
#define grstctl_ahbidle (1 << 31)

// union gintmsk_data
#define gintmsk_reserved0 (1 << 0)
#define gintmsk_modemismatch (1 << 1)
#define gintmsk_otgintr (1 << 2)
#define gintmsk_sofintr (1 << 3)
#define gintmsk_rxstsqlvl (1 << 4)
#define gintmsk_nptxfempty (1 << 5)
#define gintmsk_ginnakeff (1 << 6)
#define gintmsk_goutnakeff (1 << 7)
#define gintmsk_ulpickint (1 << 8)
#define gintmsk_i2cintr (1 << 9)
#define gintmsk_erlysuspend (1 << 10)
#define gintmsk_usbsuspend (1 << 11)
#define gintmsk_usbreset (1 << 12)
#define gintmsk_enumdone (1 << 13)
#define gintmsk_isooutdrop (1 << 14)
#define gintmsk_eopframe (1 << 15)
#define gintmsk_restoredone (1 << 16)
#define gintmsk_epmismatch (1 << 17)
#define gintmsk_inepintr (1 << 18)
#define gintmsk_outepintr (1 << 19)
#define gintmsk_incomplisoin (1 << 20)
#define gintmsk_incomplisoout (1 << 21)
#define gintmsk_fetsusp (1 << 22)
#define gintmsk_resetdet (1 << 23)
#define gintmsk_portintr (1 << 24)
#define gintmsk_hcintr (1 << 25)
#define gintmsk_ptxfempty (1 << 26)
#define gintmsk_lpmtranrcvd (1 << 27)
#define gintmsk_conidstschng (1 << 28)
#define gintmsk_disconnect (1 << 29)
#define gintmsk_sessreqintr (1 << 30)
#define gintmsk_wkupintr (1 << 31)

// union gintsts_data
#define DWC_SOF_INTR_MASK 0x0008
#define DWC_HOST_MODE 1
#define gintsts_curmode (1 << 0)
#define gintsts_modemismatch (1 << 1)
#define gintsts_otgintr (1 << 2)
#define gintsts_sofintr (1 << 3)
#define gintsts_rxstsqlvl (1 << 4)
#define gintsts_nptxfempty (1 << 5)
#define gintsts_ginnakeff (1 << 6)
#define gintsts_goutnakeff (1 << 7)
#define gintsts_ulpickint (1 << 8)
#define gintsts_i2cintr (1 << 9)
#define gintsts_erlysuspend (1 << 10)
#define gintsts_usbsuspend (1 << 11)
#define gintsts_usbreset (1 << 12)
#define gintsts_enumdone (1 << 13)
#define gintsts_isooutdrop (1 << 14)
#define gintsts_eopframe (1 << 15)
#define gintsts_restoredone (1 << 16)
#define gintsts_epmismatch (1 << 17)
#define gintsts_inepint (1 << 18)
#define gintsts_outepintr (1 << 19)
#define gintsts_incomplisoin (1 << 20)
#define gintsts_incomplisoout (1 << 21)
#define gintsts_fetsusp (1 << 22)
#define gintsts_resetdet (1 << 23)
#define gintsts_portintr (1 << 24)
#define gintsts_hcintr (1 << 25)
#define gintsts_ptxfempty (1 << 26)
#define gintsts_lpmtranrcvd (1 << 27)
#define gintsts_conidstschng (1 << 28)
#define gintsts_disconnect (1 << 29)
#define gintsts_sessreqintr (1 << 30)
#define gintsts_wkupintr (1 << 31)

// union device_grxsts_data
#define device_grxsts_epnum_shift (0)
#define device_grxsts_epnum_mask (0xf)
#define device_grxsts_bcnt_shift (4)
#define device_grxsts_bcnt_mask (0x7ff)
#define device_grxsts_dpid_shift (15)
#define device_grxsts_dpid_mask (0x3)
#define DWC_STS_DATA_UPDT		0x2	// OUT Data Packet
#define DWC_STS_XFER_COMP		0x3	// OUT Data Transfer Complete
#define DWC_DSTS_GOUT_NAK		0x1	// Global OUT NAK
#define DWC_DSTS_SETUP_COMP		0x4	// Setup Phase Complete
#define DWC_DSTS_SETUP_UPDT 0x6	// SETUP Packet
#define device_grxsts_pktsts_shift (17)
#define device_grxsts_pktsts_mask (0xf)
#define device_grxsts_fn_shift (21)
#define device_grxsts_fn_mask (0xf)
#define device_grxsts_reserved25_31_shift (25)
#define device_grxsts_reserved25_31_mask (0x7f)

// union host_grxsts_data
#define host_grxsts_chnum_shift (0)
#define host_grxsts_chnum_mask (0xf)
#define host_grxsts_bcnt_shift (4)
#define host_grxsts_bcnt_mask (0x7ff)
#define host_grxsts_dpid_shift (15)
#define host_grxsts_dpid_mask (0x3)
#define host_grxsts_pktsts_shift (17)
#define host_grxsts_pktsts_mask (0xf)
#define DWC_GRXSTS_PKTSTS_IN			  0x2
#define DWC_GRXSTS_PKTSTS_IN_XFER_COMP	  0x3
#define DWC_GRXSTS_PKTSTS_DATA_TOGGLE_ERR 0x5
#define DWC_GRXSTS_PKTSTS_CH_HALTED		  0x7
#define host_grxsts_reserved21_31_shift (21)
#define host_grxsts_reserved21_31_mask (0x7ff)

// union fifosize_data
#define fifosize_startaddr_shift (0)
#define fifosize_startaddr_mask (0xffff)
#define fifosize_depth_shift (16)
#define fifosize_depth_mask (0xffff)

// union gnptxsts_data
#define gnptxsts_nptxfspcavail_shift (0)
#define gnptxsts_nptxfspcavail_mask (0xffff)
#define gnptxsts_nptxqspcavail_shift (16)
#define gnptxsts_nptxqspcavail_mask (0xff)
#define gnptxsts_nptxqtop_terminate (1 << 24)
#define gnptxsts_nptxqtop_token_shift (25)
#define gnptxsts_nptxqtop_token_mask (0x3)
#define gnptxsts_nptxqtop_chnep_shift (27)
#define gnptxsts_nptxqtop_chnep_mask (0xf)
#define gnptxsts_reserved (1 << 31)

// union dtxfsts_data
#define dtxfsts_txfspcavail_shift (0)
#define dtxfsts_txfspcavail_mask (0xffff)
#define dtxfsts_reserved_shift (16)
#define dtxfsts_reserved_mask (0xffff)

// union gi2cctl_data
#define gi2cctl_rwdata_shift (0)
#define gi2cctl_rwdata_mask (0xff)
#define gi2cctl_regaddr_shift (8)
#define gi2cctl_regaddr_mask (0xff)
#define gi2cctl_addr_shift (16)
#define gi2cctl_addr_mask (0x7f)
#define gi2cctl_i2cen (1 << 23)
#define gi2cctl_ack (1 << 24)
#define gi2cctl_i2csuspctl (1 << 25)
#define gi2cctl_i2cdevaddr_shift (26)
#define gi2cctl_i2cdevaddr_mask (0x3)
#define gi2cctl_i2cdatse0 (1 << 28)
#define gi2cctl_reserved (1 << 29)
#define gi2cctl_rw (1 << 30)
#define gi2cctl_bsydne (1 << 31)

// union gpvndctl_data
#define gpvndctl_regdata_shift (0)
#define gpvndctl_regdata_mask (0xff)
#define gpvndctl_vctrl_shift (8)
#define gpvndctl_vctrl_mask (0xff)
#define gpvndctl_regaddr16_21_shift (16)
#define gpvndctl_regaddr16_21_mask (0x3f)
#define gpvndctl_regwr (1 << 22)
#define gpvndctl_reserved23_24_shift (23)
#define gpvndctl_reserved23_24_mask (0x3)
#define gpvndctl_newregreq (1 << 25)
#define gpvndctl_vstsbsy (1 << 26)
#define gpvndctl_vstsdone (1 << 27)
#define gpvndctl_reserved28_30_shift (28)
#define gpvndctl_reserved28_30_mask (0x7)
#define gpvndctl_disulpidrvr (1 << 31)

// union ggpio_data
#define ggpio_gpi_shift (0)
#define ggpio_gpi_mask (0xffff)
#define ggpio_gpo_shift (16)
#define ggpio_gpo_mask (0xffff)

// union guid_data
#define guid_rwdata_shift (0)
#define guid_rwdata_mask (0xffffffff)

// union gsnpsid_data
#define gsnpsid_rwdata_shift (0)
#define gsnpsid_rwdata_mask (0xffffffff)

// union hwcfg1_data
#define hwcfg1_ep_dir0_shift (0)
#define hwcfg1_ep_dir0_mask (0x3)
#define hwcfg1_ep_dir1_shift (2)
#define hwcfg1_ep_dir1_mask (0x3)
#define hwcfg1_ep_dir2_shift (4)
#define hwcfg1_ep_dir2_mask (0x3)
#define hwcfg1_ep_dir3_shift (6)
#define hwcfg1_ep_dir3_mask (0x3)
#define hwcfg1_ep_dir4_shift (8)
#define hwcfg1_ep_dir4_mask (0x3)
#define hwcfg1_ep_dir5_shift (10)
#define hwcfg1_ep_dir5_mask (0x3)
#define hwcfg1_ep_dir6_shift (12)
#define hwcfg1_ep_dir6_mask (0x3)
#define hwcfg1_ep_dir7_shift (14)
#define hwcfg1_ep_dir7_mask (0x3)
#define hwcfg1_ep_dir8_shift (16)
#define hwcfg1_ep_dir8_mask (0x3)
#define hwcfg1_ep_dir9_shift (18)
#define hwcfg1_ep_dir9_mask (0x3)
#define hwcfg1_ep_dir10_shift (20)
#define hwcfg1_ep_dir10_mask (0x3)
#define hwcfg1_ep_dir11_shift (22)
#define hwcfg1_ep_dir11_mask (0x3)
#define hwcfg1_ep_dir12_shift (24)
#define hwcfg1_ep_dir12_mask (0x3)
#define hwcfg1_ep_dir13_shift (26)
#define hwcfg1_ep_dir13_mask (0x3)
#define hwcfg1_ep_dir14_shift (28)
#define hwcfg1_ep_dir14_mask (0x3)
#define hwcfg1_ep_dir15_shift (30)
#define hwcfg1_ep_dir15_mask (0x3)

// union hwcfg2_data
#define hwcfg2_op_mode_shift (0)
#define hwcfg2_op_mode_mask (0x7)
#define DWC_HWCFG2_OP_MODE_HNP_SRP_CAPABLE_OTG 0
#define DWC_HWCFG2_OP_MODE_SRP_ONLY_CAPABLE_OTG 1
#define DWC_HWCFG2_OP_MODE_NO_HNP_SRP_CAPABLE_OTG 2
#define DWC_HWCFG2_OP_MODE_SRP_CAPABLE_DEVICE 3
#define DWC_HWCFG2_OP_MODE_NO_SRP_CAPABLE_DEVICE 4
#define DWC_HWCFG2_OP_MODE_SRP_CAPABLE_HOST 5
#define DWC_HWCFG2_OP_MODE_NO_SRP_CAPABLE_HOST 6
#define hwcfg2_architecture_shift (3)
#define hwcfg2_architecture_mask (0x3)
#define hwcfg2_point2point (1 << 5)
#define hwcfg2_hs_phy_type_shift (6)
#define hwcfg2_hs_phy_type_mask (0x3)
#define DWC_HWCFG2_HS_PHY_TYPE_NOT_SUPPORTED 0
#define DWC_HWCFG2_HS_PHY_TYPE_UTMI 1
#define DWC_HWCFG2_HS_PHY_TYPE_ULPI 2
#define DWC_HWCFG2_HS_PHY_TYPE_UTMI_ULPI 3
#define hwcfg2_fs_phy_type_shift (8)
#define hwcfg2_fs_phy_type_mask (0x3)
#define hwcfg2_num_dev_ep_shift (10)
#define hwcfg2_num_dev_ep_mask (0xf)
#define hwcfg2_num_host_chan_shift (14)
#define hwcfg2_num_host_chan_mask (0xf)
#define hwcfg2_perio_ep_supported (1 << 18)
#define hwcfg2_dynamic_fifo (1 << 19)
#define hwcfg2_multi_proc_int (1 << 20)
#define hwcfg2_reserved21 (1 << 21)
#define hwcfg2_nonperio_tx_q_depth_shift (22)
#define hwcfg2_nonperio_tx_q_depth_mask (0x3)
#define hwcfg2_host_perio_tx_q_depth_shift (24)
#define hwcfg2_host_perio_tx_q_depth_mask (0x3)
#define hwcfg2_dev_token_q_depth_shift (26)
#define hwcfg2_dev_token_q_depth_mask (0x1f)
#define hwcfg2_otg_enable_ic_usb (1 << 31)

// union hwcfg3_data
#define hwcfg3_xfer_size_cntr_width_shift (0)
#define hwcfg3_xfer_size_cntr_width_mask (0xf)
#define hwcfg3_packet_size_cntr_width_shift (4)
#define hwcfg3_packet_size_cntr_width_mask (0x7)
#define hwcfg3_otg_func (1 << 7)
#define hwcfg3_i2c (1 << 8)
#define hwcfg3_vendor_ctrl_if (1 << 9)
#define hwcfg3_optional_features (1 << 10)
#define hwcfg3_synch_reset_type (1 << 11)
#define hwcfg3_adp_supp (1 << 12)
#define hwcfg3_otg_enable_hsic (1 << 13)
#define hwcfg3_bc_support (1 << 14)
#define hwcfg3_otg_lpm_en (1 << 15)
#define hwcfg3_dfifo_depth_shift (16)
#define hwcfg3_dfifo_depth_mask (0xffff)

// union hwcfg4_data
#define hwcfg4_num_dev_perio_in_ep_shift (0)
#define hwcfg4_num_dev_perio_in_ep_mask (0xf)
#define hwcfg4_power_optimiz (1 << 4)
#define hwcfg4_min_ahb_freq (1 << 5)
#define hwcfg4_hiber (1 << 6)
#define hwcfg4_xhiber (1 << 7)
#define hwcfg4_reserved_shift (8)
#define hwcfg4_reserved_mask (0x3f)
#define hwcfg4_utmi_phy_data_width_shift (14)
#define hwcfg4_utmi_phy_data_width_mask (0x3)
#define hwcfg4_num_dev_mode_ctrl_ep_shift (16)
#define hwcfg4_num_dev_mode_ctrl_ep_mask (0xf)
#define hwcfg4_iddig_filt_en (1 << 20)
#define hwcfg4_vbus_valid_filt_en (1 << 21)
#define hwcfg4_a_valid_filt_en (1 << 22)
#define hwcfg4_b_valid_filt_en (1 << 23)
#define hwcfg4_session_end_filt_en (1 << 24)
#define hwcfg4_ded_fifo_en (1 << 25)
#define hwcfg4_num_in_eps_shift (26)
#define hwcfg4_num_in_eps_mask (0xf)
#define hwcfg4_desc_dma (1 << 30)
#define hwcfg4_desc_dma_dyn (1 << 31)

// union glpmctl_data
#define glpmctl_lpm_cap_en (1 << 0)
#define glpmctl_appl_resp (1 << 1)
#define glpmctl_hird_shift (2)
#define glpmctl_hird_mask (0xf)
#define glpmctl_rem_wkup_en (1 << 6)
#define glpmctl_en_utmi_sleep (1 << 7)
#define glpmctl_hird_thres_shift (8)
#define glpmctl_hird_thres_mask (0x1f)
#define glpmctl_lpm_resp_shift (13)
#define glpmctl_lpm_resp_mask (0x3)
#define glpmctl_prt_sleep_sts (1 << 15)
#define glpmctl_sleep_state_resumeok (1 << 16)
#define glpmctl_lpm_chan_index_shift (17)
#define glpmctl_lpm_chan_index_mask (0xf)
#define glpmctl_retry_count_shift (21)
#define glpmctl_retry_count_mask (0x7)
#define glpmctl_send_lpm (1 << 24)
#define glpmctl_retry_count_sts_shift (25)
#define glpmctl_retry_count_sts_mask (0x7)
#define glpmctl_reserved28_29_shift (28)
#define glpmctl_reserved28_29_mask (0x3)
#define glpmctl_hsic_connect (1 << 30)
#define glpmctl_inv_sel_hsic (1 << 31)

// union adpctl_data
#define adpctl_prb_dschg_shift (0)
#define adpctl_prb_dschg_mask (0x3)
#define adpctl_prb_delta_shift (2)
#define adpctl_prb_delta_mask (0x3)
#define adpctl_prb_per_shift (4)
#define adpctl_prb_per_mask (0x3)
#define adpctl_rtim_shift (6)
#define adpctl_rtim_mask (0x7ff)
#define adpctl_enaprb (1 << 17)
#define adpctl_enasns (1 << 18)
#define adpctl_adpres (1 << 19)
#define adpctl_adpen (1 << 20)
#define adpctl_adp_prb_int (1 << 21)
#define adpctl_adp_sns_int (1 << 22)
#define adpctl_adp_tmout_int (1 << 23)
#define adpctl_adp_prb_int_msk (1 << 24)
#define adpctl_adp_sns_int_msk (1 << 25)
#define adpctl_adp_tmout_int_msk (1 << 26)
#define adpctl_ar_shift (27)
#define adpctl_ar_mask (0x3)
#define adpctl_reserved29_31_shift (29)
#define adpctl_reserved29_31_mask (0x7)

// union dcfg_data
#define dcfg_devspd_shift (0)
#define dcfg_devspd_mask (0x3)
#define dcfg_nzstsouthshk (1 << 2)
#define DWC_DCFG_SEND_STALL 1
#define dcfg_ena32khzs (1 << 3)
#define dcfg_devaddr_shift (4)
#define dcfg_devaddr_mask (0x7f)
#define dcfg_perfrint_shift (11)
#define dcfg_perfrint_mask (0x3)
#define DWC_DCFG_FRAME_INTERVAL_80 0
#define DWC_DCFG_FRAME_INTERVAL_85 1
#define DWC_DCFG_FRAME_INTERVAL_90 2
#define DWC_DCFG_FRAME_INTERVAL_95 3
#define dcfg_endevoutnak (1 << 13)
#define dcfg_reserved14_17_shift (14)
#define dcfg_reserved14_17_mask (0xf)
#define dcfg_epmscnt_shift (18)
#define dcfg_epmscnt_mask (0x1f)
#define dcfg_descdma (1 << 23)
#define dcfg_perschintvl_shift (24)
#define dcfg_perschintvl_mask (0x3)
#define dcfg_resvalid_shift (26)
#define dcfg_resvalid_mask (0x3f)

// union dctl_data
#define dctl_rmtwkupsig (1 << 0)
#define dctl_sftdiscon (1 << 1)
#define dctl_gnpinnaksts (1 << 2)
#define dctl_goutnaksts (1 << 3)
#define dctl_tstctl_shift (4)
#define dctl_tstctl_mask (0x7)
#define dctl_sgnpinnak (1 << 7)
#define dctl_cgnpinnak (1 << 8)
#define dctl_sgoutnak (1 << 9)
#define dctl_cgoutnak (1 << 10)
#define dctl_pwronprgdone (1 << 11)
#define dctl_reserved (1 << 12)
#define dctl_gmc_shift (13)
#define dctl_gmc_mask (0x3)
#define dctl_ifrmnum (1 << 15)
#define dctl_nakonbble (1 << 16)
#define dctl_encontonbna (1 << 17)
#define dctl_reserved18_31_shift (18)
#define dctl_reserved18_31_mask (0x3fff)

// union dsts_data
#define dsts_suspsts (1 << 0)
#define dsts_enumspd_shift (1)
#define dsts_enumspd_mask (0x3)
#define DWC_DSTS_ENUMSPD_HS_PHY_30MHZ_OR_60MHZ 0
#define DWC_DSTS_ENUMSPD_FS_PHY_30MHZ_OR_60MHZ 1
#define DWC_DSTS_ENUMSPD_LS_PHY_6MHZ		   2
#define DWC_DSTS_ENUMSPD_FS_PHY_48MHZ		   3
#define dsts_errticerr (1 << 3)
#define dsts_reserved4_7_shift (4)
#define dsts_reserved4_7_mask (0xf)
#define dsts_soffn_shift (8)
#define dsts_soffn_mask (0x3fff)
#define dsts_reserved22_31_shift (22)
#define dsts_reserved22_31_mask (0x3ff)

// union diepint_data
#define diepint_xfercompl (1 << 0)
#define diepint_epdisabled (1 << 1)
#define diepint_ahberr (1 << 2)
#define diepint_timeout (1 << 3)
#define diepint_intktxfemp (1 << 4)
#define diepint_intknepmis (1 << 5)
#define diepint_inepnakeff (1 << 6)
#define diepint_emptyintr (1 << 7)
#define diepint_txfifoundrn (1 << 8)
#define diepint_bna (1 << 9)
#define diepint_reserved10_12_shift (10)
#define diepint_reserved10_12_mask (0x7)
#define diepint_nak (1 << 13)
#define diepint_reserved14_31_shift (14)
#define diepint_reserved14_31_mask (0x3ffff)

// union doepint_data
#define doepint_xfercompl (1 << 0)
#define doepint_epdisabled (1 << 1)
#define doepint_ahberr (1 << 2)
#define doepint_setup (1 << 3)
#define doepint_outtknepdis (1 << 4)
#define doepint_stsphsercvd (1 << 5)
#define doepint_back2backsetup (1 << 6)
#define doepint_reserved7 (1 << 7)
#define doepint_outpkterr (1 << 8)
#define doepint_bna (1 << 9)
#define doepint_reserved10 (1 << 10)
#define doepint_pktdrpsts (1 << 11)
#define doepint_babble (1 << 12)
#define doepint_nak (1 << 13)
#define doepint_nyet (1 << 14)
#define doepint_sr (1 << 15)
#define doepint_reserved16_31_shift (16)
#define doepint_reserved16_31_mask (0xffff)

// union daint_data
#define daint_in_shift (0)
#define daint_in_mask (0xffff)
#define daint_out_shift (16)
#define daint_out_mask (0xffff)
#define daint_b_inep0 (1 << 0)
#define daint_b_inep1 (1 << 1)
#define daint_b_inep2 (1 << 2)
#define daint_b_inep3 (1 << 3)
#define daint_b_inep4 (1 << 4)
#define daint_b_inep5 (1 << 5)
#define daint_b_inep6 (1 << 6)
#define daint_b_inep7 (1 << 7)
#define daint_b_inep8 (1 << 8)
#define daint_b_inep9 (1 << 9)
#define daint_b_inep10 (1 << 10)
#define daint_b_inep11 (1 << 11)
#define daint_b_inep12 (1 << 12)
#define daint_b_inep13 (1 << 13)
#define daint_b_inep14 (1 << 14)
#define daint_b_inep15 (1 << 15)
#define daint_b_outep0 (1 << 16)
#define daint_b_outep1 (1 << 17)
#define daint_b_outep2 (1 << 18)
#define daint_b_outep3 (1 << 19)
#define daint_b_outep4 (1 << 20)
#define daint_b_outep5 (1 << 21)
#define daint_b_outep6 (1 << 22)
#define daint_b_outep7 (1 << 23)
#define daint_b_outep8 (1 << 24)
#define daint_b_outep9 (1 << 25)
#define daint_b_outep10 (1 << 26)
#define daint_b_outep11 (1 << 27)
#define daint_b_outep12 (1 << 28)
#define daint_b_outep13 (1 << 29)
#define daint_b_outep14 (1 << 30)
#define daint_b_outep15 (1 << 31)

// union dtknq1_data
#define dtknq1_intknwptr_shift (0)
#define dtknq1_intknwptr_mask (0x1f)
#define dtknq1_reserved05_06_shift (5)
#define dtknq1_reserved05_06_mask (0x3)
#define dtknq1_wrap_bit (1 << 7)
#define dtknq1_epnums0_5_shift (8)
#define dtknq1_epnums0_5_mask (0xffffff)

// union dthrctl_data
#define dthrctl_non_iso_thr_en (1 << 0)
#define dthrctl_iso_thr_en (1 << 1)
#define dthrctl_tx_thr_len_shift (2)
#define dthrctl_tx_thr_len_mask (0x1ff)
#define dthrctl_ahb_thr_ratio_shift (11)
#define dthrctl_ahb_thr_ratio_mask (0x3)
#define dthrctl_reserved13_15_shift (13)
#define dthrctl_reserved13_15_mask (0x7)
#define dthrctl_rx_thr_en (1 << 16)
#define dthrctl_rx_thr_len_shift (17)
#define dthrctl_rx_thr_len_mask (0x1ff)
#define dthrctl_reserved26 (1 << 26)
#define dthrctl_arbprken (1 << 27)
#define dthrctl_reserved28_31_shift (28)
#define dthrctl_reserved28_31_mask (0xf)

// union depctl_data
#define depctl_mps_shift (0)
#define depctl_mps_mask (0x7ff)
#define DWC_DEP0CTL_MPS_64	 0
#define DWC_DEP0CTL_MPS_32	 1
#define DWC_DEP0CTL_MPS_16	 2
#define DWC_DEP0CTL_MPS_8	 3
#define depctl_nextep_shift (11)
#define depctl_nextep_mask (0xf)
#define depctl_usbactep (1 << 15)
#define depctl_dpid (1 << 16)
#define depctl_naksts (1 << 17)
#define depctl_eptype_shift (18)
#define depctl_eptype_mask (0x3)
#define depctl_snp (1 << 20)
#define depctl_stall (1 << 21)
#define depctl_txfnum_shift (22)
#define depctl_txfnum_mask (0xf)
#define depctl_cnak (1 << 26)
#define depctl_snak (1 << 27)
#define depctl_setd0pid (1 << 28)
#define depctl_setd1pid (1 << 29)
#define depctl_epdis (1 << 30)
#define depctl_epena (1 << 31)

// union deptsiz_data
#define deptsiz_xfersize_shift (0)
#define deptsiz_xfersize_mask (0x7ffff)
#define MAX_PKT_CNT 1023
#define deptsiz_pktcnt_shift (19)
#define deptsiz_pktcnt_mask (0x3ff)
#define deptsiz_mc_shift (29)
#define deptsiz_mc_mask (0x3)
#define deptsiz_reserved (1 << 31)

// union deptsiz0_data
#define deptsiz0_xfersize_shift (0)
#define deptsiz0_xfersize_mask (0x7f)
#define deptsiz0_reserved7_18_shift (7)
#define deptsiz0_reserved7_18_mask (0xfff)
#define deptsiz0_pktcnt_shift (19)
#define deptsiz0_pktcnt_mask (0x3)
#define deptsiz0_reserved21_28_shift (21)
#define deptsiz0_reserved21_28_mask (0xff)
#define deptsiz0_supcnt_shift (29)
#define deptsiz0_supcnt_mask (0x3)
#define deptsiz0_reserved31 (1 << 31)
#define BS_HOST_READY	0x0
#define BS_DMA_BUSY		0x1
#define BS_DMA_DONE		0x2
#define BS_HOST_BUSY	0x3
#define RTS_SUCCESS		0x0
#define RTS_BUFFLUSH	0x1
#define RTS_RESERVED	0x2
#define RTS_BUFERR		0x3

// union dev_dma_desc_sts
#define dev_dma_desc_sts_bytes_shift (0)
#define dev_dma_desc_sts_bytes_mask (0xffff)
#define dev_dma_desc_sts_nak (1 << 16)
#define dev_dma_desc_sts_reserved17_22_shift (17)
#define dev_dma_desc_sts_reserved17_22_mask (0x3f)
#define dev_dma_desc_sts_mtrf (1 << 23)
#define dev_dma_desc_sts_sr (1 << 24)
#define dev_dma_desc_sts_ioc (1 << 25)
#define dev_dma_desc_sts_sp (1 << 26)
#define dev_dma_desc_sts_l (1 << 27)
#define dev_dma_desc_sts_sts_shift (28)
#define dev_dma_desc_sts_sts_mask (0x3)
#define dev_dma_desc_sts_bs_shift (30)
#define dev_dma_desc_sts_bs_mask (0x3)
#define dev_dma_desc_sts_b_rxbytes_shift (0)
#define dev_dma_desc_sts_b_rxbytes_mask (0x7ff)
#define dev_dma_desc_sts_b_reserved11 (1 << 11)
#define dev_dma_desc_sts_b_framenum_shift (12)
#define dev_dma_desc_sts_b_framenum_mask (0x7ff)
#define dev_dma_desc_sts_b_pid_shift (23)
#define dev_dma_desc_sts_b_pid_mask (0x3)
#define dev_dma_desc_sts_b_ioc (1 << 25)
#define dev_dma_desc_sts_b_sp (1 << 26)
#define dev_dma_desc_sts_b_l (1 << 27)
#define dev_dma_desc_sts_b_rxsts_shift (28)
#define dev_dma_desc_sts_b_rxsts_mask (0x3)
#define dev_dma_desc_sts_b_bs_shift (30)
#define dev_dma_desc_sts_b_bs_mask (0x3)
#define dev_dma_desc_sts_b_b_txbytes_shift (0)
#define dev_dma_desc_sts_b_b_txbytes_mask (0xfff)
#define dev_dma_desc_sts_b_b_framenum_shift (12)
#define dev_dma_desc_sts_b_b_framenum_mask (0x7ff)
#define dev_dma_desc_sts_b_b_pid_shift (23)
#define dev_dma_desc_sts_b_b_pid_mask (0x3)
#define dev_dma_desc_sts_b_b_ioc (1 << 25)
#define dev_dma_desc_sts_b_b_sp (1 << 26)
#define dev_dma_desc_sts_b_b_l (1 << 27)
#define dev_dma_desc_sts_b_b_txsts_shift (28)
#define dev_dma_desc_sts_b_b_txsts_mask (0x3)
#define dev_dma_desc_sts_b_b_bs_shift (30)
#define dev_dma_desc_sts_b_b_bs_mask (0x3)
#define DWC_DEV_GLOBAL_REG_OFFSET 0x800
#define DWC_DEV_IN_EP_REG_OFFSET 0x900
#define DWC_EP_REG_OFFSET 0x20
#define DWC_DEV_OUT_EP_REG_OFFSET 0xB00

// union hcfg_data
#define hcfg_fslspclksel_shift (0)
#define hcfg_fslspclksel_mask (0x3)
#define DWC_HCFG_30_60_MHZ 0
#define DWC_HCFG_48_MHZ	   1
#define DWC_HCFG_6_MHZ	   2
#define hcfg_fslssupp (1 << 2)
#define hcfg_reserved3_6_shift (3)
#define hcfg_reserved3_6_mask (0xf)
#define hcfg_ena32khzs (1 << 7)
#define hcfg_resvalid_shift (8)
#define hcfg_resvalid_mask (0xff)
#define hcfg_reserved16_22_shift (16)
#define hcfg_reserved16_22_mask (0x7f)
#define hcfg_descdma (1 << 23)
#define hcfg_frlisten_shift (24)
#define hcfg_frlisten_mask (0x3)
#define hcfg_perschedena (1 << 26)
#define hcfg_reserved27_30_shift (27)
#define hcfg_reserved27_30_mask (0xf)
#define hcfg_modechtimen (1 << 31)

// union hfir_data
#define hfir_frint_shift (0)
#define hfir_frint_mask (0xffff)
#define hfir_hfirrldctrl (1 << 16)
#define hfir_reserved_shift (17)
#define hfir_reserved_mask (0x7fff)

// union hfnum_data
#define hfnum_frnum_shift (0)
#define hfnum_frnum_mask (0xffff)
#define DWC_HFNUM_MAX_FRNUM 0x3FFF
#define hfnum_frrem_shift (16)
#define hfnum_frrem_mask (0xffff)

// union hptxsts_data
#define hptxsts_ptxfspcavail_shift (0)
#define hptxsts_ptxfspcavail_mask (0xffff)
#define hptxsts_ptxqspcavail_shift (16)
#define hptxsts_ptxqspcavail_mask (0xff)
#define hptxsts_ptxqtop_terminate (1 << 24)
#define hptxsts_ptxqtop_token_shift (25)
#define hptxsts_ptxqtop_token_mask (0x3)
#define hptxsts_ptxqtop_chnum_shift (27)
#define hptxsts_ptxqtop_chnum_mask (0xf)
#define hptxsts_ptxqtop_odd (1 << 31)

// union hprt0_data
#define hprt0_prtconnsts (1 << 0)
#define hprt0_prtconndet (1 << 1)
#define hprt0_prtena (1 << 2)
#define hprt0_prtenchng (1 << 3)
#define hprt0_prtovrcurract (1 << 4)
#define hprt0_prtovrcurrchng (1 << 5)
#define hprt0_prtres (1 << 6)
#define hprt0_prtsusp (1 << 7)
#define hprt0_prtrst (1 << 8)
#define hprt0_reserved9 (1 << 9)
#define hprt0_prtlnsts_shift (10)
#define hprt0_prtlnsts_mask (0x3)
#define hprt0_prtpwr (1 << 12)
#define hprt0_prttstctl_shift (13)
#define hprt0_prttstctl_mask (0xf)
#define hprt0_prtspd_shift (17)
#define hprt0_prtspd_mask (0x3)
#define DWC_HPRT0_PRTSPD_HIGH_SPEED 0
#define DWC_HPRT0_PRTSPD_FULL_SPEED 1
#define DWC_HPRT0_PRTSPD_LOW_SPEED	2
#define hprt0_reserved19_31_shift (19)
#define hprt0_reserved19_31_mask (0x1fff)

// union haint_data
#define haint_ch0 (1 << 0)
#define haint_ch1 (1 << 1)
#define haint_ch2 (1 << 2)
#define haint_ch3 (1 << 3)
#define haint_ch4 (1 << 4)
#define haint_ch5 (1 << 5)
#define haint_ch6 (1 << 6)
#define haint_ch7 (1 << 7)
#define haint_ch8 (1 << 8)
#define haint_ch9 (1 << 9)
#define haint_ch10 (1 << 10)
#define haint_ch11 (1 << 11)
#define haint_ch12 (1 << 12)
#define haint_ch13 (1 << 13)
#define haint_ch14 (1 << 14)
#define haint_ch15 (1 << 15)
#define haint_reserved_shift (16)
#define haint_reserved_mask (0xffff)
#define haint_b_chint_shift (0)
#define haint_b_chint_mask (0xffff)
#define haint_b_reserved_shift (16)
#define haint_b_reserved_mask (0xffff)

// union haintmsk_data
#define haintmsk_ch0 (1 << 0)
#define haintmsk_ch1 (1 << 1)
#define haintmsk_ch2 (1 << 2)
#define haintmsk_ch3 (1 << 3)
#define haintmsk_ch4 (1 << 4)
#define haintmsk_ch5 (1 << 5)
#define haintmsk_ch6 (1 << 6)
#define haintmsk_ch7 (1 << 7)
#define haintmsk_ch8 (1 << 8)
#define haintmsk_ch9 (1 << 9)
#define haintmsk_ch10 (1 << 10)
#define haintmsk_ch11 (1 << 11)
#define haintmsk_ch12 (1 << 12)
#define haintmsk_ch13 (1 << 13)
#define haintmsk_ch14 (1 << 14)
#define haintmsk_ch15 (1 << 15)
#define haintmsk_reserved_shift (16)
#define haintmsk_reserved_mask (0xffff)
#define haintmsk_b_chint_shift (0)
#define haintmsk_b_chint_mask (0xffff)
#define haintmsk_b_reserved_shift (16)
#define haintmsk_b_reserved_mask (0xffff)

// union hcchar_data
#define hcchar_mps_shift (0)
#define hcchar_mps_mask (0x7ff)
#define hcchar_epnum_shift (11)
#define hcchar_epnum_mask (0xf)
#define hcchar_epdir (1 << 15)
#define hcchar_reserved (1 << 16)
#define hcchar_lspddev (1 << 17)
#define hcchar_eptype_shift (18)
#define hcchar_eptype_mask (0x3)
#define hcchar_multicnt_shift (20)
#define hcchar_multicnt_mask (0x3)
#define hcchar_devaddr_shift (22)
#define hcchar_devaddr_mask (0x7f)
#define hcchar_oddfrm (1 << 29)
#define hcchar_chdis (1 << 30)
#define hcchar_chen (1 << 31)

// union hcsplt_data
#define hcsplt_prtaddr_shift (0)
#define hcsplt_prtaddr_mask (0x7f)
#define hcsplt_hubaddr_shift (7)
#define hcsplt_hubaddr_mask (0x7f)
#define hcsplt_xactpos_shift (14)
#define hcsplt_xactpos_mask (0x3)
#define DWC_HCSPLIT_XACTPOS_MID 0
#define DWC_HCSPLIT_XACTPOS_END 1
#define DWC_HCSPLIT_XACTPOS_BEGIN 2
#define DWC_HCSPLIT_XACTPOS_ALL 3
#define hcsplt_compsplt (1 << 16)
#define hcsplt_reserved_shift (17)
#define hcsplt_reserved_mask (0x3fff)
#define hcsplt_spltena (1 << 31)

// union hcint_data
#define hcint_xfercomp (1 << 0)
#define hcint_chhltd (1 << 1)
#define hcint_ahberr (1 << 2)
#define hcint_stall (1 << 3)
#define hcint_nak (1 << 4)
#define hcint_ack (1 << 5)
#define hcint_nyet (1 << 6)
#define hcint_xacterr (1 << 7)
#define hcint_bblerr (1 << 8)
#define hcint_frmovrun (1 << 9)
#define hcint_datatglerr (1 << 10)
#define hcint_bna (1 << 11)
#define hcint_xcs_xact (1 << 12)
#define hcint_frm_list_roll (1 << 13)
#define hcint_reserved14_31_shift (14)
#define hcint_reserved14_31_mask (0x3ffff)

// union hcintmsk_data
#define hcintmsk_xfercompl (1 << 0)
#define hcintmsk_chhltd (1 << 1)
#define hcintmsk_ahberr (1 << 2)
#define hcintmsk_stall (1 << 3)
#define hcintmsk_nak (1 << 4)
#define hcintmsk_ack (1 << 5)
#define hcintmsk_nyet (1 << 6)
#define hcintmsk_xacterr (1 << 7)
#define hcintmsk_bblerr (1 << 8)
#define hcintmsk_frmovrun (1 << 9)
#define hcintmsk_datatglerr (1 << 10)
#define hcintmsk_bna (1 << 11)
#define hcintmsk_xcs_xact (1 << 12)
#define hcintmsk_frm_list_roll (1 << 13)
#define hcintmsk_reserved14_31_shift (14)
#define hcintmsk_reserved14_31_mask (0x3ffff)

// union hctsiz_data
#define hctsiz_xfersize_shift (0)
#define hctsiz_xfersize_mask (0x7ffff)
#define hctsiz_pktcnt_shift (19)
#define hctsiz_pktcnt_mask (0x3ff)
#define hctsiz_pid_shift (29)
#define hctsiz_pid_mask (0x3)
#define DWC_HCTSIZ_DATA0 0
#define DWC_HCTSIZ_DATA1 2
#define DWC_HCTSIZ_DATA2 1
#define DWC_HCTSIZ_MDATA 3
#define DWC_HCTSIZ_SETUP 3
#define hctsiz_dopng (1 << 31)
#define hctsiz_b_schinfo_shift (0)
#define hctsiz_b_schinfo_mask (0xff)
#define hctsiz_b_ntd_shift (8)
#define hctsiz_b_ntd_mask (0xff)
#define hctsiz_b_reserved16_28_shift (16)
#define hctsiz_b_reserved16_28_mask (0x1fff)
#define hctsiz_b_pid_shift (29)
#define hctsiz_b_pid_mask (0x3)
#define hctsiz_b_dopng (1 << 31)

// union hcdma_data
#define hcdma_reserved0_2_shift (0)
#define hcdma_reserved0_2_mask (0x7)
#define hcdma_ctd_shift (3)
#define hcdma_ctd_mask (0xff)
#define hcdma_dma_addr_shift (11)
#define hcdma_dma_addr_mask (0x1fffff)

// union host_dma_desc_sts
#define host_dma_desc_sts_n_bytes_shift (0)
#define host_dma_desc_sts_n_bytes_mask (0x1ffff)
#define host_dma_desc_sts_qtd_offset_shift (17)
#define host_dma_desc_sts_qtd_offset_mask (0x3f)
#define host_dma_desc_sts_a_qtd (1 << 23)
#define host_dma_desc_sts_sup (1 << 24)
#define host_dma_desc_sts_ioc (1 << 25)
#define host_dma_desc_sts_eol (1 << 26)
#define host_dma_desc_sts_reserved27 (1 << 27)
#define host_dma_desc_sts_sts_shift (28)
#define host_dma_desc_sts_sts_mask (0x3)
#define DMA_DESC_STS_PKTERR	1
#define host_dma_desc_sts_reserved30 (1 << 30)
#define host_dma_desc_sts_a (1 << 31)
#define host_dma_desc_sts_b_n_bytes_shift (0)
#define host_dma_desc_sts_b_n_bytes_mask (0xfff)
#define host_dma_desc_sts_b_reserved12_24_shift (12)
#define host_dma_desc_sts_b_reserved12_24_mask (0x1fff)
#define host_dma_desc_sts_b_ioc (1 << 25)
#define host_dma_desc_sts_b_reserved26_27_shift (26)
#define host_dma_desc_sts_b_reserved26_27_mask (0x3)
#define host_dma_desc_sts_b_sts_shift (28)
#define host_dma_desc_sts_b_sts_mask (0x3)
#define host_dma_desc_sts_b_reserved30 (1 << 30)
#define host_dma_desc_sts_b_a (1 << 31)
#define	MAX_DMA_DESC_SIZE		131071
#define MAX_DMA_DESC_NUM_GENERIC	64
#define MAX_DMA_DESC_NUM_HS_ISOC	256
#define MAX_FRLIST_EN_NUM		64
#define DWC_OTG_HOST_GLOBAL_REG_OFFSET 0x400
#define DWC_OTG_HOST_PORT_REGS_OFFSET 0x440
#define DWC_OTG_HOST_CHAN_REGS_OFFSET 0x500
#define DWC_OTG_CHAN_REGS_OFFSET 0x20

// union pcgcctl_data
#define pcgcctl_stoppclk (1 << 0)
#define pcgcctl_gatehclk (1 << 1)
#define pcgcctl_pwrclmp (1 << 2)
#define pcgcctl_rstpdwnmodule (1 << 3)
#define pcgcctl_reserved (1 << 4)
#define pcgcctl_enbl_sleep_gating (1 << 5)
#define pcgcctl_phy_in_sleep (1 << 6)
#define pcgcctl_deep_sleep (1 << 7)
#define pcgcctl_resetaftsusp (1 << 8)
#define pcgcctl_restoremode (1 << 9)
#define pcgcctl_enbl_extnd_hiber (1 << 10)
#define pcgcctl_extnd_hiber_pwrclmp (1 << 11)
#define pcgcctl_extnd_hiber_switch (1 << 12)
#define pcgcctl_ess_reg_restored (1 << 13)
#define pcgcctl_prt_clk_sel_shift (14)
#define pcgcctl_prt_clk_sel_mask (0x3)
#define pcgcctl_port_power (1 << 16)
#define pcgcctl_max_xcvrselect_shift (17)
#define pcgcctl_max_xcvrselect_mask (0x3)
#define pcgcctl_max_termsel (1 << 19)
#define pcgcctl_mac_dev_addr_shift (20)
#define pcgcctl_mac_dev_addr_mask (0x7f)
#define pcgcctl_p2hd_dev_enum_spd_shift (27)
#define pcgcctl_p2hd_dev_enum_spd_mask (0x3)
#define pcgcctl_p2hd_prt_spd_shift (29)
#define pcgcctl_p2hd_prt_spd_mask (0x3)
#define pcgcctl_if_dev_mode (1 << 31)

// union gdfifocfg_data
#define gdfifocfg_gdfifocfg_shift (0)
#define gdfifocfg_gdfifocfg_mask (0xffff)
#define gdfifocfg_epinfobase_shift (16)
#define gdfifocfg_epinfobase_mask (0xffff)

// union gpwrdn_data
#define gpwrdn_pmuintsel (1 << 0)
#define gpwrdn_pmuactv (1 << 1)
#define gpwrdn_restore (1 << 2)
#define gpwrdn_pwrdnclmp (1 << 3)
#define gpwrdn_pwrdnrstn (1 << 4)
#define gpwrdn_pwrdnswtch (1 << 5)
#define gpwrdn_dis_vbus (1 << 6)
#define gpwrdn_lnstschng (1 << 7)
#define gpwrdn_lnstchng_msk (1 << 8)
#define gpwrdn_rst_det (1 << 9)
#define gpwrdn_rst_det_msk (1 << 10)
#define gpwrdn_disconn_det (1 << 11)
#define gpwrdn_disconn_det_msk (1 << 12)
#define gpwrdn_connect_det (1 << 13)
#define gpwrdn_connect_det_msk (1 << 14)
#define gpwrdn_srp_det (1 << 15)
#define gpwrdn_srp_det_msk (1 << 16)
#define gpwrdn_sts_chngint (1 << 17)
#define gpwrdn_sts_chngint_msk (1 << 18)
#define gpwrdn_linestate_shift (19)
#define gpwrdn_linestate_mask (0x3)
#define gpwrdn_idsts (1 << 21)
#define gpwrdn_bsessvld (1 << 22)
#define gpwrdn_adp_int (1 << 23)
#define gpwrdn_mult_val_id_bc_shift (24)
#define gpwrdn_mult_val_id_bc_mask (0x1f)
#define gpwrdn_reserved29_31_shift (29)
#define gpwrdn_reserved29_31_mask (0x7)

#endif // BCM2835_USB_REGS_H
