#ifndef __SOC_PMCTRL_INTERFACE_H__
#define __SOC_PMCTRL_INTERFACE_H__ 
#ifdef __cplusplus
#if __cplusplus
    extern "C" {
#endif
#endif
#ifndef __SOC_H_FOR_ASM__
#define SOC_PMCTRL_PERIBAKDATA0_ADDR(base) ((base) + (0x630UL))
#define SOC_PMCTRL_PERIBAKDATA1_ADDR(base) ((base) + (0x634UL))
#define SOC_PMCTRL_PERIBAKDATA2_ADDR(base) ((base) + (0x638UL))
#define SOC_PMCTRL_PERIBAKDATA3_ADDR(base) ((base) + (0x63CUL))
#define SOC_PMCTRL_SPMIVOLCFG_ADDR(base) ((base) + (0xC14UL))
#define SOC_PMCTRL_SPMIVOLSTAT_ADDR(base) ((base) + (0xC18UL))
#define SOC_PMCTRL_FREQ_VOTE_A0_ADDR(base) ((base) + (0x200UL))
#define SOC_PMCTRL_FREQ_VOTE_A1_ADDR(base) ((base) + (0x204UL))
#define SOC_PMCTRL_FREQ_VOTE_B0_ADDR(base) ((base) + (0x208UL))
#define SOC_PMCTRL_FREQ_VOTE_B1_ADDR(base) ((base) + (0x20CUL))
#define SOC_PMCTRL_FREQ_VOTE_C0_ADDR(base) ((base) + (0x210UL))
#define SOC_PMCTRL_FREQ_VOTE_C1_ADDR(base) ((base) + (0x214UL))
#define SOC_PMCTRL_FREQ_VOTE_D0_ADDR(base) ((base) + (0x218UL))
#define SOC_PMCTRL_FREQ_VOTE_D1_ADDR(base) ((base) + (0x21CUL))
#define SOC_PMCTRL_FREQ_VOTE_E0_ADDR(base) ((base) + (0x220UL))
#define SOC_PMCTRL_FREQ_VOTE_E1_ADDR(base) ((base) + (0x224UL))
#define SOC_PMCTRL_FREQ_VOTE_E2_ADDR(base) ((base) + (0x228UL))
#define SOC_PMCTRL_FREQ_VOTE_E3_ADDR(base) ((base) + (0x22CUL))
#define SOC_PMCTRL_FREQ_VOTE_F0_ADDR(base) ((base) + (0x230UL))
#define SOC_PMCTRL_FREQ_VOTE_F1_ADDR(base) ((base) + (0x234UL))
#define SOC_PMCTRL_FREQ_VOTE_F2_ADDR(base) ((base) + (0x238UL))
#define SOC_PMCTRL_FREQ_VOTE_F3_ADDR(base) ((base) + (0x23CUL))
#define SOC_PMCTRL_FREQ_VOTE_G0_ADDR(base) ((base) + (0x240UL))
#define SOC_PMCTRL_FREQ_VOTE_G1_ADDR(base) ((base) + (0x244UL))
#define SOC_PMCTRL_FREQ_VOTE_G2_ADDR(base) ((base) + (0x248UL))
#define SOC_PMCTRL_FREQ_VOTE_G3_ADDR(base) ((base) + (0x24CUL))
#define SOC_PMCTRL_FREQ_VOTE_H0_ADDR(base) ((base) + (0x250UL))
#define SOC_PMCTRL_FREQ_VOTE_H1_ADDR(base) ((base) + (0x254UL))
#define SOC_PMCTRL_FREQ_VOTE_H2_ADDR(base) ((base) + (0x258UL))
#define SOC_PMCTRL_FREQ_VOTE_H3_ADDR(base) ((base) + (0x25CUL))
#define SOC_PMCTRL_FREQ_VOTE_H4_ADDR(base) ((base) + (0x260UL))
#define SOC_PMCTRL_FREQ_VOTE_H5_ADDR(base) ((base) + (0x264UL))
#define SOC_PMCTRL_FREQ_VOTE_H6_ADDR(base) ((base) + (0x268UL))
#define SOC_PMCTRL_FREQ_VOTE_H7_ADDR(base) ((base) + (0x26CUL))
#define SOC_PMCTRL_FREQ_VOTE_I0_ADDR(base) ((base) + (0x270UL))
#define SOC_PMCTRL_FREQ_VOTE_I1_ADDR(base) ((base) + (0x274UL))
#define SOC_PMCTRL_FREQ_VOTE_I2_ADDR(base) ((base) + (0x278UL))
#define SOC_PMCTRL_FREQ_VOTE_I3_ADDR(base) ((base) + (0x27CUL))
#define SOC_PMCTRL_FREQ_VOTE_I4_ADDR(base) ((base) + (0x280UL))
#define SOC_PMCTRL_FREQ_VOTE_I5_ADDR(base) ((base) + (0x284UL))
#define SOC_PMCTRL_FREQ_VOTE_I6_ADDR(base) ((base) + (0x288UL))
#define SOC_PMCTRL_FREQ_VOTE_I7_ADDR(base) ((base) + (0x28CUL))
#define SOC_PMCTRL_INTR_MASK_TO_LPMCU_ADDR(base) ((base) + (0x290UL))
#define SOC_PMCTRL_INTR_MASK_TO_CPU_LP_CTRL_ADDR(base) ((base) + (0x294UL))
#define SOC_PMCTRL_INTR_MASK_TO_GPU_LP_CTRL_ADDR(base) ((base) + (0x298UL))
#define SOC_PMCTRL_INTR_MASK_TO_DDR_LP_CTRL_ADDR(base) ((base) + (0x29CUL))
#define SOC_PMCTRL_VOTE_CHANNEL_CFG_ADDR(base) ((base) + (0x2B0UL))
#define SOC_PMCTRL_VOTE_MODE_CFG_0_ADDR(base) ((base) + (0x2BCUL))
#define SOC_PMCTRL_VOTE_MODE_CFG_1_ADDR(base) ((base) + (0x2C0UL))
#define SOC_PMCTRL_VOTE_START_EN_ADDR(base) ((base) + (0x2C4UL))
#define SOC_PMCTRL_INT_VOTE_EN_ADDR(base) ((base) + (0x2C8UL))
#define SOC_PMCTRL_INT_VOTE_CLR_ADDR(base) ((base) + (0x2CCUL))
#define SOC_PMCTRL_INT_VOTE_RAW_STAT_ADDR(base) ((base) + (0x2D0UL))
#define SOC_PMCTRL_INT_VOTE_STAT_ADDR(base) ((base) + (0x2D4UL))
#define SOC_PMCTRL_INT_FREQUENCY_VOTE_ADDR(base) ((base) + (0x2D8UL))
#define SOC_PMCTRL_VOTE_RESULT_A_ADDR(base) ((base) + (0x2DCUL))
#define SOC_PMCTRL_VOTE_RESULT_B_ADDR(base) ((base) + (0x2E0UL))
#define SOC_PMCTRL_VOTE_RESULT_C_ADDR(base) ((base) + (0x2E4UL))
#define SOC_PMCTRL_VOTE_RESULT_D_ADDR(base) ((base) + (0x2E8UL))
#define SOC_PMCTRL_VOTE_RESULT_E_ADDR(base) ((base) + (0x2ECUL))
#define SOC_PMCTRL_VOTE_RESULT_F_ADDR(base) ((base) + (0x2F0UL))
#define SOC_PMCTRL_VOTE_RESULT_G_ADDR(base) ((base) + (0x2F4UL))
#define SOC_PMCTRL_VOTE_RESULT_H_ADDR(base) ((base) + (0x2F8UL))
#define SOC_PMCTRL_VOTE_RESULT_I_ADDR(base) ((base) + (0x2FCUL))
#define SOC_PMCTRL_PERI_CTRL0_ADDR(base) ((base) + (0x340UL))
#define SOC_PMCTRL_PERI_CTRL1_ADDR(base) ((base) + (0x344UL))
#define SOC_PMCTRL_PERI_CTRL2_ADDR(base) ((base) + (0x348UL))
#define SOC_PMCTRL_PERI_CTRL3_ADDR(base) ((base) + (0x34CUL))
#define SOC_PMCTRL_PERI_CTRL4_ADDR(base) ((base) + (0x350UL))
#define SOC_PMCTRL_PERI_CTRL5_ADDR(base) ((base) + (0x354UL))
#define SOC_PMCTRL_PERI_CTRL6_ADDR(base) ((base) + (0x358UL))
#define SOC_PMCTRL_PERI_CTRL7_ADDR(base) ((base) + (0x35CUL))
#define SOC_PMCTRL_PERI_STAT0_ADDR(base) ((base) + (0x360UL))
#define SOC_PMCTRL_PERI_STAT1_ADDR(base) ((base) + (0x364UL))
#define SOC_PMCTRL_PERI_STAT2_ADDR(base) ((base) + (0x368UL))
#define SOC_PMCTRL_PERI_STAT3_ADDR(base) ((base) + (0x36CUL))
#define SOC_PMCTRL_PERI_STAT4_ADDR(base) ((base) + (0x370UL))
#define SOC_PMCTRL_QIC_POWER_IDLEREQ_0_ADDR(base) ((base) + (0x380UL))
#define SOC_PMCTRL_QIC_POWER_IDLEACK_0_ADDR(base) ((base) + (0x384UL))
#define SOC_PMCTRL_QIC_POWER_IDLE_0_ADDR(base) ((base) + (0x388UL))
#define SOC_PMCTRL_BOOTROMFLAG_ADDR(base) ((base) + (0x460UL))
#define SOC_PMCTRL_PERIHPMEN_ADDR(base) ((base) + (0x464UL))
#define SOC_PMCTRL_PERIHPMCLKDIV_ADDR(base) ((base) + (0x468UL))
#define SOC_PMCTRL_PERIHPMOPC_ADDR(base) ((base) + (0x46CUL))
#define SOC_PMCTRL_PERI_STAT8_ADDR(base) ((base) + (0x4D0UL))
#define SOC_PMCTRL_PERI_STAT9_ADDR(base) ((base) + (0x4D4UL))
#define SOC_PMCTRL_PERI_STAT10_ADDR(base) ((base) + (0x4D8UL))
#define SOC_PMCTRL_PERI_STAT11_ADDR(base) ((base) + (0x4DCUL))
#define SOC_PMCTRL_PERI_STAT12_ADDR(base) ((base) + (0x4E0UL))
#define SOC_PMCTRL_PERI_STAT13_ADDR(base) ((base) + (0x4E4UL))
#define SOC_PMCTRL_PERI_STAT14_ADDR(base) ((base) + (0x4E8UL))
#define SOC_PMCTRL_PERI_STAT15_ADDR(base) ((base) + (0x4ECUL))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_0_ADDR(base) ((base) + (0xA00UL))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_1_ADDR(base) ((base) + (0xA04UL))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_2_ADDR(base) ((base) + (0xA08UL))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_3_ADDR(base) ((base) + (0xA0CUL))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_4_ADDR(base) ((base) + (0xA10UL))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_5_ADDR(base) ((base) + (0xA14UL))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_6_ADDR(base) ((base) + (0xA18UL))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_7_ADDR(base) ((base) + (0xA1CUL))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_8_ADDR(base) ((base) + (0xA20UL))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_9_ADDR(base) ((base) + (0xA24UL))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_10_ADDR(base) ((base) + (0xA28UL))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_11_ADDR(base) ((base) + (0xA2CUL))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_12_ADDR(base) ((base) + (0xA30UL))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_13_ADDR(base) ((base) + (0xA34UL))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_14_ADDR(base) ((base) + (0xA38UL))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_15_ADDR(base) ((base) + (0xA3CUL))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_GROUP_0_ADDR(base) ((base) + (0xAA0UL))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_GROUP_1_ADDR(base) ((base) + (0xAA4UL))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_GROUP_2_ADDR(base) ((base) + (0xAA8UL))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_GROUP_3_ADDR(base) ((base) + (0xAACUL))
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_0_ADDR(base) ((base) + (0x000UL))
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_1_ADDR(base) ((base) + (0x004UL))
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_ADDR(base) ((base) + (0x02CUL))
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_ADDR(base) ((base) + (0x008UL))
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_ADDR(base) ((base) + (0x00CUL))
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_ADDR(base) ((base) + (0x010UL))
#define SOC_PMCTRL_PERI_PMU_TRIM_UP_TIME_ADDR(base) ((base) + (0xA54UL))
#define SOC_PMCTRL_PERI_PMU_TRIM_DN_TTME_ADDR(base) ((base) + (0xA58UL))
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_ADDR(base) ((base) + (0x014UL))
#define SOC_PMCTRL_PERI_VOL_STABLE_ADDR(base) ((base) + (0x018UL))
#define SOC_PMCTRL_PERI_INIT_VOL_CONFIG_ADDR(base) ((base) + (0xA64UL))
#define SOC_PMCTRL_PERI_FIX_VOL_CONFIG_ADDR(base) ((base) + (0xA68UL))
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_ADDR(base) ((base) + (0x01CUL))
#define SOC_PMCTRL_PERI_VOL_READ_ADDR(base) ((base) + (0xA70UL))
#define SOC_PMCTRL_PERI_DVS_OUTPUT_READ_ADDR(base) ((base) + (0x020UL))
#define SOC_PMCTRL_PERI_VOL_RANK_IDX_0_ADDR(base) ((base) + (0xA78UL))
#define SOC_PMCTRL_PERI_VOL_RANK_IDX_1_ADDR(base) ((base) + (0xA7CUL))
#define SOC_PMCTRL_PERI_VOTE_SFT_HRD_VOL_IDX_ADDR(base) ((base) + (0xA80UL))
#define SOC_PMCTRL_PERI_STAT_TIME_HOLD_ADDR(base) ((base) + (0xA84UL))
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_ADDR(base) ((base) + (0x024UL))
#define SOC_PMCTRL_PERI_INTR_BYPASS_HRD_ADDR(base) ((base) + (0x028UL))
#define SOC_PMCTRL_PERI_VOL_CHG_FLAG_ADDR(base) ((base) + (0xA90UL))
#define SOC_PMCTRL_PERI_VALID_HRD_VOL_IDX_ADDR(base) ((base) + (0xA94UL))
#define SOC_PMCTRL_PERI_SPMI_HOLD_TIME_ADDR(base) ((base) + (0xA98UL))
#define SOC_PMCTRL_BUCK5_VOL_CTRL_0_ADDR(base) ((base) + (0xB2CUL))
#define SOC_PMCTRL_BUCK5_VOL_CTRL_1_ADDR(base) ((base) + (0xB30UL))
#define SOC_PMCTRL_BUCK5_VOL_CTRL_2_ADDR(base) ((base) + (0xB34UL))
#define SOC_PMCTRL_BUCK5_VOL_CTRL_3_ADDR(base) ((base) + (0xB38UL))
#define SOC_PMCTRL_BUCK5_VOL_CTRL_4_ADDR(base) ((base) + (0xB3CUL))
#define SOC_PMCTRL_BUCK5_PMU_TRIM_UP_TIME_ADDR(base) ((base) + (0xB40UL))
#define SOC_PMCTRL_BUCK5_PMU_TRIM_DN_TIME_ADDR(base) ((base) + (0xB44UL))
#define SOC_PMCTRL_BUCK5_VOL_CONFIG_ADDR(base) ((base) + (0xB48UL))
#define SOC_PMCTRL_BUCK5_VOL_READ_ADDR(base) ((base) + (0xB4CUL))
#define SOC_PMCTRL_BUCK5_DVS_OUTPUT_READ_ADDR(base) ((base) + (0xB50UL))
#define SOC_PMCTRL_BUCK5_SPMI_HOLD_TIME_ADDR(base) ((base) + (0xB54UL))
#define SOC_PMCTRL_HW_DSS_DVFS_APB_SW_CFG_ADDR(base) ((base) + (0x030UL))
#define SOC_PMCTRL_HW_DSS_DVFS_APB_DIV_CFG_ADDR(base) ((base) + (0x034UL))
#define SOC_PMCTRL_APB_DSS_DVFS_PLL_CFG_ADDR(base) ((base) + (0x038UL))
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VOL_CFG_ADDR(base) ((base) + (0xA48UL))
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VF_CFG_ADDR(base) ((base) + (0x040UL))
#define SOC_PMCTRL_APB_SF_INSTR_LIST_ADDR(base,sf) ((base) + (0x070+ (sf)*4UL))
#define SOC_PMCTRL_APB_HW_INSTR_LIST_ADDR(base,hw) ((base) + (0x100+ (hw)*4UL))
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG1_ADDR(base) ((base) + (0x044UL))
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG2_ADDR(base) ((base) + (0x048UL))
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG3_ADDR(base) ((base) + (0x04CUL))
#define SOC_PMCTRL_DSS_DVFS_INTR_CFG_ADDR(base) ((base) + (0x050UL))
#define SOC_PMCTRL_HW_DSS_DVFS_SF_CH_ADDR(base) ((base) + (0x054UL))
#define SOC_PMCTRL_HW_DSS_DVFS_SF_RD_ADDR(base) ((base) + (0x058UL))
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_ADDR(base) ((base) + (0x05CUL))
#define SOC_PMCTRL_HW_DSS_DVFS_HW_RD_ADDR(base) ((base) + (0x060UL))
#define SOC_PMCTRL_APB_DSS_DVFS_HW_EN_ADDR(base) ((base) + (0x064UL))
#define SOC_PMCTRL_APB_DSS_DVFS_SF_EN_ADDR(base) ((base) + (0x068UL))
#define SOC_PMCTRL_PERI_DSS_AVS_VOL_IDX_0_ADDR(base) ((base) + (0xA40UL))
#define SOC_PMCTRL_PERI_DSS_AVS_VOL_IDX_1_ADDR(base) ((base) + (0xA44UL))
#define SOC_PMCTRL_APB_DSS2DDR_INSTR_LIST_ADDR(base,ddr_freq) ((base) + (0x160+ (ddr_freq)*4UL))
#define SOC_PMCTRL_APB_DSS2QICE_INSTR_LIST_ADDR(base,qice_freq) ((base) + (0x188+ (qice_freq)*4UL))
#define SOC_PMCTRL_HW_DSS2DDR_DFS_SF_CFG_ADDR(base) ((base) + (0x1B0UL))
#define SOC_PMCTRL_HW_DSS2QICE_DFS_SF_CFG_ADDR(base) ((base) + (0x1B4UL))
#define SOC_PMCTRL_HW_DSS2DDR2QICE_DFS_UP_FLAG_ADDR(base) ((base) + (0x1B8UL))
#define SOC_PMCTRL_HW_DSS2DDR_DFS_RD_ADDR(base) ((base) + (0x1BCUL))
#define SOC_PMCTRL_HW_DSS2QICE_DFS_RD_ADDR(base) ((base) + (0x1C0UL))
#define SOC_PMCTRL_APB_DDR_QICE_CUR_FREQ_ADDR(base) ((base) + (0x1C4UL))
#define SOC_PMCTRL_APB_RD_DSS2DQ_DEBUG_ADDR(base) ((base) + (0x1C8UL))
#define SOC_PMCTRL_APB_RD_DSS_DVFS_DEBUG_ADDR(base) ((base) + (0x1CCUL))
#define SOC_PMCTRL_APB_DEBUG_CFG_ADDR(base) ((base) + (0x1D0UL))
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_IDX_ADDR(base) ((base) + (0xD00UL))
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_0_ADDR(base) ((base) + (0x500UL))
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_1_ADDR(base) ((base) + (0x504UL))
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_2_ADDR(base) ((base) + (0x508UL))
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_ADDR(base) ((base) + (0x510UL))
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_1_ADDR(base) ((base) + (0x514UL))
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_ADDR(base) ((base) + (0x520UL))
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_ADDR(base) ((base) + (0x524UL))
#define SOC_PMCTRL_VDDC_MEM_PMU_TRIM_UP_TIME_ADDR(base) ((base) + (0xD54UL))
#define SOC_PMCTRL_VDDC_MEM_PMU_TRIM_DN_TTME_ADDR(base) ((base) + (0xD58UL))
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_ADDR(base) ((base) + (0x530UL))
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_ADDR(base) ((base) + (0x534UL))
#define SOC_PMCTRL_VDDC_MEM_INIT_VOL_CONFIG_ADDR(base) ((base) + (0xD64UL))
#define SOC_PMCTRL_VDDC_MEM_FIX_VOL_CONFIG_ADDR(base) ((base) + (0xD68UL))
#define SOC_PMCTRL_VDDC_MEM_VOL_READ_ADDR(base) ((base) + (0xD70UL))
#define SOC_PMCTRL_VDDC_MEM_DVS_OUTPUT_READ_ADDR(base) ((base) + (0xD74UL))
#define SOC_PMCTRL_VDDC_MEM_SPMI_HOLD_TIME_ADDR(base) ((base) + (0xD78UL))
#else
#define SOC_PMCTRL_PERIBAKDATA0_ADDR(base) ((base) + (0x630))
#define SOC_PMCTRL_PERIBAKDATA1_ADDR(base) ((base) + (0x634))
#define SOC_PMCTRL_PERIBAKDATA2_ADDR(base) ((base) + (0x638))
#define SOC_PMCTRL_PERIBAKDATA3_ADDR(base) ((base) + (0x63C))
#define SOC_PMCTRL_SPMIVOLCFG_ADDR(base) ((base) + (0xC14))
#define SOC_PMCTRL_SPMIVOLSTAT_ADDR(base) ((base) + (0xC18))
#define SOC_PMCTRL_FREQ_VOTE_A0_ADDR(base) ((base) + (0x200))
#define SOC_PMCTRL_FREQ_VOTE_A1_ADDR(base) ((base) + (0x204))
#define SOC_PMCTRL_FREQ_VOTE_B0_ADDR(base) ((base) + (0x208))
#define SOC_PMCTRL_FREQ_VOTE_B1_ADDR(base) ((base) + (0x20C))
#define SOC_PMCTRL_FREQ_VOTE_C0_ADDR(base) ((base) + (0x210))
#define SOC_PMCTRL_FREQ_VOTE_C1_ADDR(base) ((base) + (0x214))
#define SOC_PMCTRL_FREQ_VOTE_D0_ADDR(base) ((base) + (0x218))
#define SOC_PMCTRL_FREQ_VOTE_D1_ADDR(base) ((base) + (0x21C))
#define SOC_PMCTRL_FREQ_VOTE_E0_ADDR(base) ((base) + (0x220))
#define SOC_PMCTRL_FREQ_VOTE_E1_ADDR(base) ((base) + (0x224))
#define SOC_PMCTRL_FREQ_VOTE_E2_ADDR(base) ((base) + (0x228))
#define SOC_PMCTRL_FREQ_VOTE_E3_ADDR(base) ((base) + (0x22C))
#define SOC_PMCTRL_FREQ_VOTE_F0_ADDR(base) ((base) + (0x230))
#define SOC_PMCTRL_FREQ_VOTE_F1_ADDR(base) ((base) + (0x234))
#define SOC_PMCTRL_FREQ_VOTE_F2_ADDR(base) ((base) + (0x238))
#define SOC_PMCTRL_FREQ_VOTE_F3_ADDR(base) ((base) + (0x23C))
#define SOC_PMCTRL_FREQ_VOTE_G0_ADDR(base) ((base) + (0x240))
#define SOC_PMCTRL_FREQ_VOTE_G1_ADDR(base) ((base) + (0x244))
#define SOC_PMCTRL_FREQ_VOTE_G2_ADDR(base) ((base) + (0x248))
#define SOC_PMCTRL_FREQ_VOTE_G3_ADDR(base) ((base) + (0x24C))
#define SOC_PMCTRL_FREQ_VOTE_H0_ADDR(base) ((base) + (0x250))
#define SOC_PMCTRL_FREQ_VOTE_H1_ADDR(base) ((base) + (0x254))
#define SOC_PMCTRL_FREQ_VOTE_H2_ADDR(base) ((base) + (0x258))
#define SOC_PMCTRL_FREQ_VOTE_H3_ADDR(base) ((base) + (0x25C))
#define SOC_PMCTRL_FREQ_VOTE_H4_ADDR(base) ((base) + (0x260))
#define SOC_PMCTRL_FREQ_VOTE_H5_ADDR(base) ((base) + (0x264))
#define SOC_PMCTRL_FREQ_VOTE_H6_ADDR(base) ((base) + (0x268))
#define SOC_PMCTRL_FREQ_VOTE_H7_ADDR(base) ((base) + (0x26C))
#define SOC_PMCTRL_FREQ_VOTE_I0_ADDR(base) ((base) + (0x270))
#define SOC_PMCTRL_FREQ_VOTE_I1_ADDR(base) ((base) + (0x274))
#define SOC_PMCTRL_FREQ_VOTE_I2_ADDR(base) ((base) + (0x278))
#define SOC_PMCTRL_FREQ_VOTE_I3_ADDR(base) ((base) + (0x27C))
#define SOC_PMCTRL_FREQ_VOTE_I4_ADDR(base) ((base) + (0x280))
#define SOC_PMCTRL_FREQ_VOTE_I5_ADDR(base) ((base) + (0x284))
#define SOC_PMCTRL_FREQ_VOTE_I6_ADDR(base) ((base) + (0x288))
#define SOC_PMCTRL_FREQ_VOTE_I7_ADDR(base) ((base) + (0x28C))
#define SOC_PMCTRL_INTR_MASK_TO_LPMCU_ADDR(base) ((base) + (0x290))
#define SOC_PMCTRL_INTR_MASK_TO_CPU_LP_CTRL_ADDR(base) ((base) + (0x294))
#define SOC_PMCTRL_INTR_MASK_TO_GPU_LP_CTRL_ADDR(base) ((base) + (0x298))
#define SOC_PMCTRL_INTR_MASK_TO_DDR_LP_CTRL_ADDR(base) ((base) + (0x29C))
#define SOC_PMCTRL_VOTE_CHANNEL_CFG_ADDR(base) ((base) + (0x2B0))
#define SOC_PMCTRL_VOTE_MODE_CFG_0_ADDR(base) ((base) + (0x2BC))
#define SOC_PMCTRL_VOTE_MODE_CFG_1_ADDR(base) ((base) + (0x2C0))
#define SOC_PMCTRL_VOTE_START_EN_ADDR(base) ((base) + (0x2C4))
#define SOC_PMCTRL_INT_VOTE_EN_ADDR(base) ((base) + (0x2C8))
#define SOC_PMCTRL_INT_VOTE_CLR_ADDR(base) ((base) + (0x2CC))
#define SOC_PMCTRL_INT_VOTE_RAW_STAT_ADDR(base) ((base) + (0x2D0))
#define SOC_PMCTRL_INT_VOTE_STAT_ADDR(base) ((base) + (0x2D4))
#define SOC_PMCTRL_INT_FREQUENCY_VOTE_ADDR(base) ((base) + (0x2D8))
#define SOC_PMCTRL_VOTE_RESULT_A_ADDR(base) ((base) + (0x2DC))
#define SOC_PMCTRL_VOTE_RESULT_B_ADDR(base) ((base) + (0x2E0))
#define SOC_PMCTRL_VOTE_RESULT_C_ADDR(base) ((base) + (0x2E4))
#define SOC_PMCTRL_VOTE_RESULT_D_ADDR(base) ((base) + (0x2E8))
#define SOC_PMCTRL_VOTE_RESULT_E_ADDR(base) ((base) + (0x2EC))
#define SOC_PMCTRL_VOTE_RESULT_F_ADDR(base) ((base) + (0x2F0))
#define SOC_PMCTRL_VOTE_RESULT_G_ADDR(base) ((base) + (0x2F4))
#define SOC_PMCTRL_VOTE_RESULT_H_ADDR(base) ((base) + (0x2F8))
#define SOC_PMCTRL_VOTE_RESULT_I_ADDR(base) ((base) + (0x2FC))
#define SOC_PMCTRL_PERI_CTRL0_ADDR(base) ((base) + (0x340))
#define SOC_PMCTRL_PERI_CTRL1_ADDR(base) ((base) + (0x344))
#define SOC_PMCTRL_PERI_CTRL2_ADDR(base) ((base) + (0x348))
#define SOC_PMCTRL_PERI_CTRL3_ADDR(base) ((base) + (0x34C))
#define SOC_PMCTRL_PERI_CTRL4_ADDR(base) ((base) + (0x350))
#define SOC_PMCTRL_PERI_CTRL5_ADDR(base) ((base) + (0x354))
#define SOC_PMCTRL_PERI_CTRL6_ADDR(base) ((base) + (0x358))
#define SOC_PMCTRL_PERI_CTRL7_ADDR(base) ((base) + (0x35C))
#define SOC_PMCTRL_PERI_STAT0_ADDR(base) ((base) + (0x360))
#define SOC_PMCTRL_PERI_STAT1_ADDR(base) ((base) + (0x364))
#define SOC_PMCTRL_PERI_STAT2_ADDR(base) ((base) + (0x368))
#define SOC_PMCTRL_PERI_STAT3_ADDR(base) ((base) + (0x36C))
#define SOC_PMCTRL_PERI_STAT4_ADDR(base) ((base) + (0x370))
#define SOC_PMCTRL_QIC_POWER_IDLEREQ_0_ADDR(base) ((base) + (0x380))
#define SOC_PMCTRL_QIC_POWER_IDLEACK_0_ADDR(base) ((base) + (0x384))
#define SOC_PMCTRL_QIC_POWER_IDLE_0_ADDR(base) ((base) + (0x388))
#define SOC_PMCTRL_BOOTROMFLAG_ADDR(base) ((base) + (0x460))
#define SOC_PMCTRL_PERIHPMEN_ADDR(base) ((base) + (0x464))
#define SOC_PMCTRL_PERIHPMCLKDIV_ADDR(base) ((base) + (0x468))
#define SOC_PMCTRL_PERIHPMOPC_ADDR(base) ((base) + (0x46C))
#define SOC_PMCTRL_PERI_STAT8_ADDR(base) ((base) + (0x4D0))
#define SOC_PMCTRL_PERI_STAT9_ADDR(base) ((base) + (0x4D4))
#define SOC_PMCTRL_PERI_STAT10_ADDR(base) ((base) + (0x4D8))
#define SOC_PMCTRL_PERI_STAT11_ADDR(base) ((base) + (0x4DC))
#define SOC_PMCTRL_PERI_STAT12_ADDR(base) ((base) + (0x4E0))
#define SOC_PMCTRL_PERI_STAT13_ADDR(base) ((base) + (0x4E4))
#define SOC_PMCTRL_PERI_STAT14_ADDR(base) ((base) + (0x4E8))
#define SOC_PMCTRL_PERI_STAT15_ADDR(base) ((base) + (0x4EC))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_0_ADDR(base) ((base) + (0xA00))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_1_ADDR(base) ((base) + (0xA04))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_2_ADDR(base) ((base) + (0xA08))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_3_ADDR(base) ((base) + (0xA0C))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_4_ADDR(base) ((base) + (0xA10))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_5_ADDR(base) ((base) + (0xA14))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_6_ADDR(base) ((base) + (0xA18))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_7_ADDR(base) ((base) + (0xA1C))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_8_ADDR(base) ((base) + (0xA20))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_9_ADDR(base) ((base) + (0xA24))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_10_ADDR(base) ((base) + (0xA28))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_11_ADDR(base) ((base) + (0xA2C))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_12_ADDR(base) ((base) + (0xA30))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_13_ADDR(base) ((base) + (0xA34))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_14_ADDR(base) ((base) + (0xA38))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_15_ADDR(base) ((base) + (0xA3C))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_GROUP_0_ADDR(base) ((base) + (0xAA0))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_GROUP_1_ADDR(base) ((base) + (0xAA4))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_GROUP_2_ADDR(base) ((base) + (0xAA8))
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_GROUP_3_ADDR(base) ((base) + (0xAAC))
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_0_ADDR(base) ((base) + (0x000))
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_1_ADDR(base) ((base) + (0x004))
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_ADDR(base) ((base) + (0x02C))
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_ADDR(base) ((base) + (0x008))
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_ADDR(base) ((base) + (0x00C))
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_ADDR(base) ((base) + (0x010))
#define SOC_PMCTRL_PERI_PMU_TRIM_UP_TIME_ADDR(base) ((base) + (0xA54))
#define SOC_PMCTRL_PERI_PMU_TRIM_DN_TTME_ADDR(base) ((base) + (0xA58))
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_ADDR(base) ((base) + (0x014))
#define SOC_PMCTRL_PERI_VOL_STABLE_ADDR(base) ((base) + (0x018))
#define SOC_PMCTRL_PERI_INIT_VOL_CONFIG_ADDR(base) ((base) + (0xA64))
#define SOC_PMCTRL_PERI_FIX_VOL_CONFIG_ADDR(base) ((base) + (0xA68))
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_ADDR(base) ((base) + (0x01C))
#define SOC_PMCTRL_PERI_VOL_READ_ADDR(base) ((base) + (0xA70))
#define SOC_PMCTRL_PERI_DVS_OUTPUT_READ_ADDR(base) ((base) + (0x020))
#define SOC_PMCTRL_PERI_VOL_RANK_IDX_0_ADDR(base) ((base) + (0xA78))
#define SOC_PMCTRL_PERI_VOL_RANK_IDX_1_ADDR(base) ((base) + (0xA7C))
#define SOC_PMCTRL_PERI_VOTE_SFT_HRD_VOL_IDX_ADDR(base) ((base) + (0xA80))
#define SOC_PMCTRL_PERI_STAT_TIME_HOLD_ADDR(base) ((base) + (0xA84))
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_ADDR(base) ((base) + (0x024))
#define SOC_PMCTRL_PERI_INTR_BYPASS_HRD_ADDR(base) ((base) + (0x028))
#define SOC_PMCTRL_PERI_VOL_CHG_FLAG_ADDR(base) ((base) + (0xA90))
#define SOC_PMCTRL_PERI_VALID_HRD_VOL_IDX_ADDR(base) ((base) + (0xA94))
#define SOC_PMCTRL_PERI_SPMI_HOLD_TIME_ADDR(base) ((base) + (0xA98))
#define SOC_PMCTRL_BUCK5_VOL_CTRL_0_ADDR(base) ((base) + (0xB2C))
#define SOC_PMCTRL_BUCK5_VOL_CTRL_1_ADDR(base) ((base) + (0xB30))
#define SOC_PMCTRL_BUCK5_VOL_CTRL_2_ADDR(base) ((base) + (0xB34))
#define SOC_PMCTRL_BUCK5_VOL_CTRL_3_ADDR(base) ((base) + (0xB38))
#define SOC_PMCTRL_BUCK5_VOL_CTRL_4_ADDR(base) ((base) + (0xB3C))
#define SOC_PMCTRL_BUCK5_PMU_TRIM_UP_TIME_ADDR(base) ((base) + (0xB40))
#define SOC_PMCTRL_BUCK5_PMU_TRIM_DN_TIME_ADDR(base) ((base) + (0xB44))
#define SOC_PMCTRL_BUCK5_VOL_CONFIG_ADDR(base) ((base) + (0xB48))
#define SOC_PMCTRL_BUCK5_VOL_READ_ADDR(base) ((base) + (0xB4C))
#define SOC_PMCTRL_BUCK5_DVS_OUTPUT_READ_ADDR(base) ((base) + (0xB50))
#define SOC_PMCTRL_BUCK5_SPMI_HOLD_TIME_ADDR(base) ((base) + (0xB54))
#define SOC_PMCTRL_HW_DSS_DVFS_APB_SW_CFG_ADDR(base) ((base) + (0x030))
#define SOC_PMCTRL_HW_DSS_DVFS_APB_DIV_CFG_ADDR(base) ((base) + (0x034))
#define SOC_PMCTRL_APB_DSS_DVFS_PLL_CFG_ADDR(base) ((base) + (0x038))
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VOL_CFG_ADDR(base) ((base) + (0xA48))
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VF_CFG_ADDR(base) ((base) + (0x040))
#define SOC_PMCTRL_APB_SF_INSTR_LIST_ADDR(base,sf) ((base) + (0x070+ (sf)*4))
#define SOC_PMCTRL_APB_HW_INSTR_LIST_ADDR(base,hw) ((base) + (0x100+ (hw)*4))
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG1_ADDR(base) ((base) + (0x044))
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG2_ADDR(base) ((base) + (0x048))
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG3_ADDR(base) ((base) + (0x04C))
#define SOC_PMCTRL_DSS_DVFS_INTR_CFG_ADDR(base) ((base) + (0x050))
#define SOC_PMCTRL_HW_DSS_DVFS_SF_CH_ADDR(base) ((base) + (0x054))
#define SOC_PMCTRL_HW_DSS_DVFS_SF_RD_ADDR(base) ((base) + (0x058))
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_ADDR(base) ((base) + (0x05C))
#define SOC_PMCTRL_HW_DSS_DVFS_HW_RD_ADDR(base) ((base) + (0x060))
#define SOC_PMCTRL_APB_DSS_DVFS_HW_EN_ADDR(base) ((base) + (0x064))
#define SOC_PMCTRL_APB_DSS_DVFS_SF_EN_ADDR(base) ((base) + (0x068))
#define SOC_PMCTRL_PERI_DSS_AVS_VOL_IDX_0_ADDR(base) ((base) + (0xA40))
#define SOC_PMCTRL_PERI_DSS_AVS_VOL_IDX_1_ADDR(base) ((base) + (0xA44))
#define SOC_PMCTRL_APB_DSS2DDR_INSTR_LIST_ADDR(base,ddr_freq) ((base) + (0x160+ (ddr_freq)*4))
#define SOC_PMCTRL_APB_DSS2QICE_INSTR_LIST_ADDR(base,qice_freq) ((base) + (0x188+ (qice_freq)*4))
#define SOC_PMCTRL_HW_DSS2DDR_DFS_SF_CFG_ADDR(base) ((base) + (0x1B0))
#define SOC_PMCTRL_HW_DSS2QICE_DFS_SF_CFG_ADDR(base) ((base) + (0x1B4))
#define SOC_PMCTRL_HW_DSS2DDR2QICE_DFS_UP_FLAG_ADDR(base) ((base) + (0x1B8))
#define SOC_PMCTRL_HW_DSS2DDR_DFS_RD_ADDR(base) ((base) + (0x1BC))
#define SOC_PMCTRL_HW_DSS2QICE_DFS_RD_ADDR(base) ((base) + (0x1C0))
#define SOC_PMCTRL_APB_DDR_QICE_CUR_FREQ_ADDR(base) ((base) + (0x1C4))
#define SOC_PMCTRL_APB_RD_DSS2DQ_DEBUG_ADDR(base) ((base) + (0x1C8))
#define SOC_PMCTRL_APB_RD_DSS_DVFS_DEBUG_ADDR(base) ((base) + (0x1CC))
#define SOC_PMCTRL_APB_DEBUG_CFG_ADDR(base) ((base) + (0x1D0))
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_IDX_ADDR(base) ((base) + (0xD00))
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_0_ADDR(base) ((base) + (0x500))
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_1_ADDR(base) ((base) + (0x504))
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_2_ADDR(base) ((base) + (0x508))
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_ADDR(base) ((base) + (0x510))
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_1_ADDR(base) ((base) + (0x514))
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_ADDR(base) ((base) + (0x520))
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_ADDR(base) ((base) + (0x524))
#define SOC_PMCTRL_VDDC_MEM_PMU_TRIM_UP_TIME_ADDR(base) ((base) + (0xD54))
#define SOC_PMCTRL_VDDC_MEM_PMU_TRIM_DN_TTME_ADDR(base) ((base) + (0xD58))
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_ADDR(base) ((base) + (0x530))
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_ADDR(base) ((base) + (0x534))
#define SOC_PMCTRL_VDDC_MEM_INIT_VOL_CONFIG_ADDR(base) ((base) + (0xD64))
#define SOC_PMCTRL_VDDC_MEM_FIX_VOL_CONFIG_ADDR(base) ((base) + (0xD68))
#define SOC_PMCTRL_VDDC_MEM_VOL_READ_ADDR(base) ((base) + (0xD70))
#define SOC_PMCTRL_VDDC_MEM_DVS_OUTPUT_READ_ADDR(base) ((base) + (0xD74))
#define SOC_PMCTRL_VDDC_MEM_SPMI_HOLD_TIME_ADDR(base) ((base) + (0xD78))
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int reserved : 32;
    } reg;
} SOC_PMCTRL_PERIBAKDATA0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int reserved : 32;
    } reg;
} SOC_PMCTRL_PERIBAKDATA1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int reserved : 32;
    } reg;
} SOC_PMCTRL_PERIBAKDATA2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int reserved : 32;
    } reg;
} SOC_PMCTRL_PERIBAKDATA3_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int spmi_vol_idx_sftcfg0 : 8;
        unsigned int spmi_vol_chg_sftreq0 : 1;
        unsigned int reserved_0 : 3;
        unsigned int spmi_vol_idx_sftcfg1 : 8;
        unsigned int spmi_vol_chg_sftreq1 : 1;
        unsigned int reserved_1 : 11;
    } reg;
} SOC_PMCTRL_SPMIVOLCFG_UNION;
#endif
#define SOC_PMCTRL_SPMIVOLCFG_spmi_vol_idx_sftcfg0_START (0)
#define SOC_PMCTRL_SPMIVOLCFG_spmi_vol_idx_sftcfg0_END (7)
#define SOC_PMCTRL_SPMIVOLCFG_spmi_vol_chg_sftreq0_START (8)
#define SOC_PMCTRL_SPMIVOLCFG_spmi_vol_chg_sftreq0_END (8)
#define SOC_PMCTRL_SPMIVOLCFG_spmi_vol_idx_sftcfg1_START (12)
#define SOC_PMCTRL_SPMIVOLCFG_spmi_vol_idx_sftcfg1_END (19)
#define SOC_PMCTRL_SPMIVOLCFG_spmi_vol_chg_sftreq1_START (20)
#define SOC_PMCTRL_SPMIVOLCFG_spmi_vol_chg_sftreq1_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int sftcfg0_pmu_vol_idx_spmi : 8;
        unsigned int sftcfg0_pmu_vol_chg_spmi : 1;
        unsigned int sftcfg0_pmu_vol_ack_spmi : 1;
        unsigned int spmi_vol_sftcfg0_send_done : 1;
        unsigned int reserved_0 : 1;
        unsigned int sftcfg1_pmu_vol_idx_spmi : 8;
        unsigned int sftcfg1_pmu_vol_chg_spmi : 1;
        unsigned int sftcfg1_pmu_vol_ack_spmi : 1;
        unsigned int spmi_vol_sftcfg1_send_done : 1;
        unsigned int reserved_1 : 9;
    } reg;
} SOC_PMCTRL_SPMIVOLSTAT_UNION;
#endif
#define SOC_PMCTRL_SPMIVOLSTAT_sftcfg0_pmu_vol_idx_spmi_START (0)
#define SOC_PMCTRL_SPMIVOLSTAT_sftcfg0_pmu_vol_idx_spmi_END (7)
#define SOC_PMCTRL_SPMIVOLSTAT_sftcfg0_pmu_vol_chg_spmi_START (8)
#define SOC_PMCTRL_SPMIVOLSTAT_sftcfg0_pmu_vol_chg_spmi_END (8)
#define SOC_PMCTRL_SPMIVOLSTAT_sftcfg0_pmu_vol_ack_spmi_START (9)
#define SOC_PMCTRL_SPMIVOLSTAT_sftcfg0_pmu_vol_ack_spmi_END (9)
#define SOC_PMCTRL_SPMIVOLSTAT_spmi_vol_sftcfg0_send_done_START (10)
#define SOC_PMCTRL_SPMIVOLSTAT_spmi_vol_sftcfg0_send_done_END (10)
#define SOC_PMCTRL_SPMIVOLSTAT_sftcfg1_pmu_vol_idx_spmi_START (12)
#define SOC_PMCTRL_SPMIVOLSTAT_sftcfg1_pmu_vol_idx_spmi_END (19)
#define SOC_PMCTRL_SPMIVOLSTAT_sftcfg1_pmu_vol_chg_spmi_START (20)
#define SOC_PMCTRL_SPMIVOLSTAT_sftcfg1_pmu_vol_chg_spmi_END (20)
#define SOC_PMCTRL_SPMIVOLSTAT_sftcfg1_pmu_vol_ack_spmi_START (21)
#define SOC_PMCTRL_SPMIVOLSTAT_sftcfg1_pmu_vol_ack_spmi_END (21)
#define SOC_PMCTRL_SPMIVOLSTAT_spmi_vol_sftcfg1_send_done_START (22)
#define SOC_PMCTRL_SPMIVOLSTAT_spmi_vol_sftcfg1_send_done_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_a_channel0 : 15;
        unsigned int freq_vote_a0_msk0 : 1;
        unsigned int freq_vote_a_channel1 : 15;
        unsigned int freq_vote_a0_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_A0_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_A0_freq_vote_a_channel0_START (0)
#define SOC_PMCTRL_FREQ_VOTE_A0_freq_vote_a_channel0_END (14)
#define SOC_PMCTRL_FREQ_VOTE_A0_freq_vote_a0_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_A0_freq_vote_a0_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_A0_freq_vote_a_channel1_START (16)
#define SOC_PMCTRL_FREQ_VOTE_A0_freq_vote_a_channel1_END (30)
#define SOC_PMCTRL_FREQ_VOTE_A0_freq_vote_a0_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_A0_freq_vote_a0_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_a_channel2 : 15;
        unsigned int freq_vote_a1_msk0 : 1;
        unsigned int freq_vote_a_channel3 : 15;
        unsigned int freq_vote_a1_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_A1_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_A1_freq_vote_a_channel2_START (0)
#define SOC_PMCTRL_FREQ_VOTE_A1_freq_vote_a_channel2_END (14)
#define SOC_PMCTRL_FREQ_VOTE_A1_freq_vote_a1_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_A1_freq_vote_a1_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_A1_freq_vote_a_channel3_START (16)
#define SOC_PMCTRL_FREQ_VOTE_A1_freq_vote_a_channel3_END (30)
#define SOC_PMCTRL_FREQ_VOTE_A1_freq_vote_a1_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_A1_freq_vote_a1_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_b_channel0 : 15;
        unsigned int freq_vote_b0_msk0 : 1;
        unsigned int freq_vote_b_channel1 : 15;
        unsigned int freq_vote_b0_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_B0_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_B0_freq_vote_b_channel0_START (0)
#define SOC_PMCTRL_FREQ_VOTE_B0_freq_vote_b_channel0_END (14)
#define SOC_PMCTRL_FREQ_VOTE_B0_freq_vote_b0_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_B0_freq_vote_b0_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_B0_freq_vote_b_channel1_START (16)
#define SOC_PMCTRL_FREQ_VOTE_B0_freq_vote_b_channel1_END (30)
#define SOC_PMCTRL_FREQ_VOTE_B0_freq_vote_b0_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_B0_freq_vote_b0_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_b_channel2 : 15;
        unsigned int freq_vote_b1_msk0 : 1;
        unsigned int freq_vote_b_channel3 : 15;
        unsigned int freq_vote_b1_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_B1_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_B1_freq_vote_b_channel2_START (0)
#define SOC_PMCTRL_FREQ_VOTE_B1_freq_vote_b_channel2_END (14)
#define SOC_PMCTRL_FREQ_VOTE_B1_freq_vote_b1_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_B1_freq_vote_b1_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_B1_freq_vote_b_channel3_START (16)
#define SOC_PMCTRL_FREQ_VOTE_B1_freq_vote_b_channel3_END (30)
#define SOC_PMCTRL_FREQ_VOTE_B1_freq_vote_b1_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_B1_freq_vote_b1_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_c_channel0 : 15;
        unsigned int freq_vote_c0_msk0 : 1;
        unsigned int freq_vote_c_channel1 : 15;
        unsigned int freq_vote_c0_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_C0_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_C0_freq_vote_c_channel0_START (0)
#define SOC_PMCTRL_FREQ_VOTE_C0_freq_vote_c_channel0_END (14)
#define SOC_PMCTRL_FREQ_VOTE_C0_freq_vote_c0_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_C0_freq_vote_c0_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_C0_freq_vote_c_channel1_START (16)
#define SOC_PMCTRL_FREQ_VOTE_C0_freq_vote_c_channel1_END (30)
#define SOC_PMCTRL_FREQ_VOTE_C0_freq_vote_c0_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_C0_freq_vote_c0_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_c_channel2 : 15;
        unsigned int freq_vote_c1_msk0 : 1;
        unsigned int freq_vote_c_channel3 : 15;
        unsigned int freq_vote_c1_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_C1_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_C1_freq_vote_c_channel2_START (0)
#define SOC_PMCTRL_FREQ_VOTE_C1_freq_vote_c_channel2_END (14)
#define SOC_PMCTRL_FREQ_VOTE_C1_freq_vote_c1_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_C1_freq_vote_c1_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_C1_freq_vote_c_channel3_START (16)
#define SOC_PMCTRL_FREQ_VOTE_C1_freq_vote_c_channel3_END (30)
#define SOC_PMCTRL_FREQ_VOTE_C1_freq_vote_c1_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_C1_freq_vote_c1_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_d_channel0 : 15;
        unsigned int freq_vote_d0_msk0 : 1;
        unsigned int freq_vote_d_channel1 : 15;
        unsigned int freq_vote_d0_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_D0_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_D0_freq_vote_d_channel0_START (0)
#define SOC_PMCTRL_FREQ_VOTE_D0_freq_vote_d_channel0_END (14)
#define SOC_PMCTRL_FREQ_VOTE_D0_freq_vote_d0_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_D0_freq_vote_d0_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_D0_freq_vote_d_channel1_START (16)
#define SOC_PMCTRL_FREQ_VOTE_D0_freq_vote_d_channel1_END (30)
#define SOC_PMCTRL_FREQ_VOTE_D0_freq_vote_d0_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_D0_freq_vote_d0_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_d_channel2 : 15;
        unsigned int freq_vote_d1_msk0 : 1;
        unsigned int freq_vote_d_channel3 : 15;
        unsigned int freq_vote_d1_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_D1_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_D1_freq_vote_d_channel2_START (0)
#define SOC_PMCTRL_FREQ_VOTE_D1_freq_vote_d_channel2_END (14)
#define SOC_PMCTRL_FREQ_VOTE_D1_freq_vote_d1_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_D1_freq_vote_d1_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_D1_freq_vote_d_channel3_START (16)
#define SOC_PMCTRL_FREQ_VOTE_D1_freq_vote_d_channel3_END (30)
#define SOC_PMCTRL_FREQ_VOTE_D1_freq_vote_d1_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_D1_freq_vote_d1_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_e_channel0 : 15;
        unsigned int freq_vote_e0_msk0 : 1;
        unsigned int freq_vote_e_channel1 : 15;
        unsigned int freq_vote_e0_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_E0_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_E0_freq_vote_e_channel0_START (0)
#define SOC_PMCTRL_FREQ_VOTE_E0_freq_vote_e_channel0_END (14)
#define SOC_PMCTRL_FREQ_VOTE_E0_freq_vote_e0_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_E0_freq_vote_e0_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_E0_freq_vote_e_channel1_START (16)
#define SOC_PMCTRL_FREQ_VOTE_E0_freq_vote_e_channel1_END (30)
#define SOC_PMCTRL_FREQ_VOTE_E0_freq_vote_e0_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_E0_freq_vote_e0_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_e_channel2 : 15;
        unsigned int freq_vote_e1_msk0 : 1;
        unsigned int freq_vote_e_channel3 : 15;
        unsigned int freq_vote_e1_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_E1_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_E1_freq_vote_e_channel2_START (0)
#define SOC_PMCTRL_FREQ_VOTE_E1_freq_vote_e_channel2_END (14)
#define SOC_PMCTRL_FREQ_VOTE_E1_freq_vote_e1_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_E1_freq_vote_e1_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_E1_freq_vote_e_channel3_START (16)
#define SOC_PMCTRL_FREQ_VOTE_E1_freq_vote_e_channel3_END (30)
#define SOC_PMCTRL_FREQ_VOTE_E1_freq_vote_e1_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_E1_freq_vote_e1_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_e_channel4 : 15;
        unsigned int freq_vote_e2_msk0 : 1;
        unsigned int freq_vote_e_channel5 : 15;
        unsigned int freq_vote_e2_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_E2_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_E2_freq_vote_e_channel4_START (0)
#define SOC_PMCTRL_FREQ_VOTE_E2_freq_vote_e_channel4_END (14)
#define SOC_PMCTRL_FREQ_VOTE_E2_freq_vote_e2_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_E2_freq_vote_e2_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_E2_freq_vote_e_channel5_START (16)
#define SOC_PMCTRL_FREQ_VOTE_E2_freq_vote_e_channel5_END (30)
#define SOC_PMCTRL_FREQ_VOTE_E2_freq_vote_e2_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_E2_freq_vote_e2_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_e_channel6 : 15;
        unsigned int freq_vote_e3_msk0 : 1;
        unsigned int freq_vote_e_channel7 : 15;
        unsigned int freq_vote_e3_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_E3_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_E3_freq_vote_e_channel6_START (0)
#define SOC_PMCTRL_FREQ_VOTE_E3_freq_vote_e_channel6_END (14)
#define SOC_PMCTRL_FREQ_VOTE_E3_freq_vote_e3_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_E3_freq_vote_e3_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_E3_freq_vote_e_channel7_START (16)
#define SOC_PMCTRL_FREQ_VOTE_E3_freq_vote_e_channel7_END (30)
#define SOC_PMCTRL_FREQ_VOTE_E3_freq_vote_e3_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_E3_freq_vote_e3_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_f_channel0 : 15;
        unsigned int freq_vote_f0_msk0 : 1;
        unsigned int freq_vote_f_channel1 : 15;
        unsigned int freq_vote_f0_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_F0_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_F0_freq_vote_f_channel0_START (0)
#define SOC_PMCTRL_FREQ_VOTE_F0_freq_vote_f_channel0_END (14)
#define SOC_PMCTRL_FREQ_VOTE_F0_freq_vote_f0_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_F0_freq_vote_f0_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_F0_freq_vote_f_channel1_START (16)
#define SOC_PMCTRL_FREQ_VOTE_F0_freq_vote_f_channel1_END (30)
#define SOC_PMCTRL_FREQ_VOTE_F0_freq_vote_f0_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_F0_freq_vote_f0_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_f_channel2 : 15;
        unsigned int freq_vote_f1_msk0 : 1;
        unsigned int freq_vote_f_channel3 : 15;
        unsigned int freq_vote_f1_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_F1_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_F1_freq_vote_f_channel2_START (0)
#define SOC_PMCTRL_FREQ_VOTE_F1_freq_vote_f_channel2_END (14)
#define SOC_PMCTRL_FREQ_VOTE_F1_freq_vote_f1_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_F1_freq_vote_f1_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_F1_freq_vote_f_channel3_START (16)
#define SOC_PMCTRL_FREQ_VOTE_F1_freq_vote_f_channel3_END (30)
#define SOC_PMCTRL_FREQ_VOTE_F1_freq_vote_f1_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_F1_freq_vote_f1_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_f_channel4 : 15;
        unsigned int freq_vote_f2_msk0 : 1;
        unsigned int freq_vote_f_channel5 : 15;
        unsigned int freq_vote_f2_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_F2_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_F2_freq_vote_f_channel4_START (0)
#define SOC_PMCTRL_FREQ_VOTE_F2_freq_vote_f_channel4_END (14)
#define SOC_PMCTRL_FREQ_VOTE_F2_freq_vote_f2_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_F2_freq_vote_f2_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_F2_freq_vote_f_channel5_START (16)
#define SOC_PMCTRL_FREQ_VOTE_F2_freq_vote_f_channel5_END (30)
#define SOC_PMCTRL_FREQ_VOTE_F2_freq_vote_f2_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_F2_freq_vote_f2_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_f_channel6 : 15;
        unsigned int freq_vote_f3_msk0 : 1;
        unsigned int freq_vote_f_channel7 : 15;
        unsigned int freq_vote_f3_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_F3_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_F3_freq_vote_f_channel6_START (0)
#define SOC_PMCTRL_FREQ_VOTE_F3_freq_vote_f_channel6_END (14)
#define SOC_PMCTRL_FREQ_VOTE_F3_freq_vote_f3_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_F3_freq_vote_f3_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_F3_freq_vote_f_channel7_START (16)
#define SOC_PMCTRL_FREQ_VOTE_F3_freq_vote_f_channel7_END (30)
#define SOC_PMCTRL_FREQ_VOTE_F3_freq_vote_f3_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_F3_freq_vote_f3_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_g_channel0 : 15;
        unsigned int freq_vote_g0_msk0 : 1;
        unsigned int freq_vote_g_channel1 : 15;
        unsigned int freq_vote_g0_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_G0_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_G0_freq_vote_g_channel0_START (0)
#define SOC_PMCTRL_FREQ_VOTE_G0_freq_vote_g_channel0_END (14)
#define SOC_PMCTRL_FREQ_VOTE_G0_freq_vote_g0_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_G0_freq_vote_g0_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_G0_freq_vote_g_channel1_START (16)
#define SOC_PMCTRL_FREQ_VOTE_G0_freq_vote_g_channel1_END (30)
#define SOC_PMCTRL_FREQ_VOTE_G0_freq_vote_g0_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_G0_freq_vote_g0_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_g_channel2 : 15;
        unsigned int freq_vote_g1_msk0 : 1;
        unsigned int freq_vote_g_channel3 : 15;
        unsigned int freq_vote_g1_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_G1_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_G1_freq_vote_g_channel2_START (0)
#define SOC_PMCTRL_FREQ_VOTE_G1_freq_vote_g_channel2_END (14)
#define SOC_PMCTRL_FREQ_VOTE_G1_freq_vote_g1_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_G1_freq_vote_g1_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_G1_freq_vote_g_channel3_START (16)
#define SOC_PMCTRL_FREQ_VOTE_G1_freq_vote_g_channel3_END (30)
#define SOC_PMCTRL_FREQ_VOTE_G1_freq_vote_g1_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_G1_freq_vote_g1_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_g_channel4 : 15;
        unsigned int freq_vote_g2_msk0 : 1;
        unsigned int freq_vote_g_channel5 : 15;
        unsigned int freq_vote_g2_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_G2_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_G2_freq_vote_g_channel4_START (0)
#define SOC_PMCTRL_FREQ_VOTE_G2_freq_vote_g_channel4_END (14)
#define SOC_PMCTRL_FREQ_VOTE_G2_freq_vote_g2_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_G2_freq_vote_g2_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_G2_freq_vote_g_channel5_START (16)
#define SOC_PMCTRL_FREQ_VOTE_G2_freq_vote_g_channel5_END (30)
#define SOC_PMCTRL_FREQ_VOTE_G2_freq_vote_g2_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_G2_freq_vote_g2_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_g_channel6 : 15;
        unsigned int freq_vote_g3_msk0 : 1;
        unsigned int freq_vote_g_channel7 : 15;
        unsigned int freq_vote_g3_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_G3_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_G3_freq_vote_g_channel6_START (0)
#define SOC_PMCTRL_FREQ_VOTE_G3_freq_vote_g_channel6_END (14)
#define SOC_PMCTRL_FREQ_VOTE_G3_freq_vote_g3_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_G3_freq_vote_g3_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_G3_freq_vote_g_channel7_START (16)
#define SOC_PMCTRL_FREQ_VOTE_G3_freq_vote_g_channel7_END (30)
#define SOC_PMCTRL_FREQ_VOTE_G3_freq_vote_g3_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_G3_freq_vote_g3_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_h_channel0 : 15;
        unsigned int freq_vote_h0_msk0 : 1;
        unsigned int freq_vote_h_channel1 : 15;
        unsigned int freq_vote_h0_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_H0_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_H0_freq_vote_h_channel0_START (0)
#define SOC_PMCTRL_FREQ_VOTE_H0_freq_vote_h_channel0_END (14)
#define SOC_PMCTRL_FREQ_VOTE_H0_freq_vote_h0_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_H0_freq_vote_h0_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_H0_freq_vote_h_channel1_START (16)
#define SOC_PMCTRL_FREQ_VOTE_H0_freq_vote_h_channel1_END (30)
#define SOC_PMCTRL_FREQ_VOTE_H0_freq_vote_h0_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_H0_freq_vote_h0_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_h_channel2 : 15;
        unsigned int freq_vote_h1_msk0 : 1;
        unsigned int freq_vote_h_channel3 : 15;
        unsigned int freq_vote_h1_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_H1_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_H1_freq_vote_h_channel2_START (0)
#define SOC_PMCTRL_FREQ_VOTE_H1_freq_vote_h_channel2_END (14)
#define SOC_PMCTRL_FREQ_VOTE_H1_freq_vote_h1_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_H1_freq_vote_h1_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_H1_freq_vote_h_channel3_START (16)
#define SOC_PMCTRL_FREQ_VOTE_H1_freq_vote_h_channel3_END (30)
#define SOC_PMCTRL_FREQ_VOTE_H1_freq_vote_h1_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_H1_freq_vote_h1_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_h_channel4 : 15;
        unsigned int freq_vote_h2_msk0 : 1;
        unsigned int freq_vote_h_channel5 : 15;
        unsigned int freq_vote_h2_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_H2_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_H2_freq_vote_h_channel4_START (0)
#define SOC_PMCTRL_FREQ_VOTE_H2_freq_vote_h_channel4_END (14)
#define SOC_PMCTRL_FREQ_VOTE_H2_freq_vote_h2_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_H2_freq_vote_h2_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_H2_freq_vote_h_channel5_START (16)
#define SOC_PMCTRL_FREQ_VOTE_H2_freq_vote_h_channel5_END (30)
#define SOC_PMCTRL_FREQ_VOTE_H2_freq_vote_h2_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_H2_freq_vote_h2_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_h_channel6 : 15;
        unsigned int freq_vote_h3_msk0 : 1;
        unsigned int freq_vote_h_channel7 : 15;
        unsigned int freq_vote_h3_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_H3_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_H3_freq_vote_h_channel6_START (0)
#define SOC_PMCTRL_FREQ_VOTE_H3_freq_vote_h_channel6_END (14)
#define SOC_PMCTRL_FREQ_VOTE_H3_freq_vote_h3_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_H3_freq_vote_h3_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_H3_freq_vote_h_channel7_START (16)
#define SOC_PMCTRL_FREQ_VOTE_H3_freq_vote_h_channel7_END (30)
#define SOC_PMCTRL_FREQ_VOTE_H3_freq_vote_h3_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_H3_freq_vote_h3_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_h_channel8 : 15;
        unsigned int freq_vote_h4_msk0 : 1;
        unsigned int freq_vote_h_channel9 : 15;
        unsigned int freq_vote_h4_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_H4_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_H4_freq_vote_h_channel8_START (0)
#define SOC_PMCTRL_FREQ_VOTE_H4_freq_vote_h_channel8_END (14)
#define SOC_PMCTRL_FREQ_VOTE_H4_freq_vote_h4_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_H4_freq_vote_h4_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_H4_freq_vote_h_channel9_START (16)
#define SOC_PMCTRL_FREQ_VOTE_H4_freq_vote_h_channel9_END (30)
#define SOC_PMCTRL_FREQ_VOTE_H4_freq_vote_h4_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_H4_freq_vote_h4_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_h_channel10 : 15;
        unsigned int freq_vote_h5_msk0 : 1;
        unsigned int freq_vote_h_channel11 : 15;
        unsigned int freq_vote_h5_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_H5_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_H5_freq_vote_h_channel10_START (0)
#define SOC_PMCTRL_FREQ_VOTE_H5_freq_vote_h_channel10_END (14)
#define SOC_PMCTRL_FREQ_VOTE_H5_freq_vote_h5_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_H5_freq_vote_h5_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_H5_freq_vote_h_channel11_START (16)
#define SOC_PMCTRL_FREQ_VOTE_H5_freq_vote_h_channel11_END (30)
#define SOC_PMCTRL_FREQ_VOTE_H5_freq_vote_h5_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_H5_freq_vote_h5_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_h_channel12 : 15;
        unsigned int freq_vote_h6_msk0 : 1;
        unsigned int freq_vote_h_channel13 : 15;
        unsigned int freq_vote_h6_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_H6_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_H6_freq_vote_h_channel12_START (0)
#define SOC_PMCTRL_FREQ_VOTE_H6_freq_vote_h_channel12_END (14)
#define SOC_PMCTRL_FREQ_VOTE_H6_freq_vote_h6_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_H6_freq_vote_h6_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_H6_freq_vote_h_channel13_START (16)
#define SOC_PMCTRL_FREQ_VOTE_H6_freq_vote_h_channel13_END (30)
#define SOC_PMCTRL_FREQ_VOTE_H6_freq_vote_h6_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_H6_freq_vote_h6_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_h_channel14 : 15;
        unsigned int freq_vote_h7_msk0 : 1;
        unsigned int freq_vote_h_channel15 : 15;
        unsigned int freq_vote_h7_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_H7_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_H7_freq_vote_h_channel14_START (0)
#define SOC_PMCTRL_FREQ_VOTE_H7_freq_vote_h_channel14_END (14)
#define SOC_PMCTRL_FREQ_VOTE_H7_freq_vote_h7_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_H7_freq_vote_h7_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_H7_freq_vote_h_channel15_START (16)
#define SOC_PMCTRL_FREQ_VOTE_H7_freq_vote_h_channel15_END (30)
#define SOC_PMCTRL_FREQ_VOTE_H7_freq_vote_h7_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_H7_freq_vote_h7_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_i_channel0 : 15;
        unsigned int freq_vote_i0_msk0 : 1;
        unsigned int freq_vote_i_channel1 : 15;
        unsigned int freq_vote_i0_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_I0_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_I0_freq_vote_i_channel0_START (0)
#define SOC_PMCTRL_FREQ_VOTE_I0_freq_vote_i_channel0_END (14)
#define SOC_PMCTRL_FREQ_VOTE_I0_freq_vote_i0_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_I0_freq_vote_i0_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_I0_freq_vote_i_channel1_START (16)
#define SOC_PMCTRL_FREQ_VOTE_I0_freq_vote_i_channel1_END (30)
#define SOC_PMCTRL_FREQ_VOTE_I0_freq_vote_i0_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_I0_freq_vote_i0_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_i_channel2 : 15;
        unsigned int freq_vote_i1_msk0 : 1;
        unsigned int freq_vote_i_channel3 : 15;
        unsigned int freq_vote_i1_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_I1_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_I1_freq_vote_i_channel2_START (0)
#define SOC_PMCTRL_FREQ_VOTE_I1_freq_vote_i_channel2_END (14)
#define SOC_PMCTRL_FREQ_VOTE_I1_freq_vote_i1_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_I1_freq_vote_i1_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_I1_freq_vote_i_channel3_START (16)
#define SOC_PMCTRL_FREQ_VOTE_I1_freq_vote_i_channel3_END (30)
#define SOC_PMCTRL_FREQ_VOTE_I1_freq_vote_i1_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_I1_freq_vote_i1_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_i_channel4 : 15;
        unsigned int freq_vote_i2_msk0 : 1;
        unsigned int freq_vote_i_channel5 : 15;
        unsigned int freq_vote_i2_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_I2_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_I2_freq_vote_i_channel4_START (0)
#define SOC_PMCTRL_FREQ_VOTE_I2_freq_vote_i_channel4_END (14)
#define SOC_PMCTRL_FREQ_VOTE_I2_freq_vote_i2_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_I2_freq_vote_i2_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_I2_freq_vote_i_channel5_START (16)
#define SOC_PMCTRL_FREQ_VOTE_I2_freq_vote_i_channel5_END (30)
#define SOC_PMCTRL_FREQ_VOTE_I2_freq_vote_i2_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_I2_freq_vote_i2_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_i_channel6 : 15;
        unsigned int freq_vote_i3_msk0 : 1;
        unsigned int freq_vote_i_channel7 : 15;
        unsigned int freq_vote_i3_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_I3_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_I3_freq_vote_i_channel6_START (0)
#define SOC_PMCTRL_FREQ_VOTE_I3_freq_vote_i_channel6_END (14)
#define SOC_PMCTRL_FREQ_VOTE_I3_freq_vote_i3_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_I3_freq_vote_i3_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_I3_freq_vote_i_channel7_START (16)
#define SOC_PMCTRL_FREQ_VOTE_I3_freq_vote_i_channel7_END (30)
#define SOC_PMCTRL_FREQ_VOTE_I3_freq_vote_i3_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_I3_freq_vote_i3_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_i_channel8 : 15;
        unsigned int freq_vote_i4_msk0 : 1;
        unsigned int freq_vote_i_channel9 : 15;
        unsigned int freq_vote_i4_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_I4_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_I4_freq_vote_i_channel8_START (0)
#define SOC_PMCTRL_FREQ_VOTE_I4_freq_vote_i_channel8_END (14)
#define SOC_PMCTRL_FREQ_VOTE_I4_freq_vote_i4_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_I4_freq_vote_i4_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_I4_freq_vote_i_channel9_START (16)
#define SOC_PMCTRL_FREQ_VOTE_I4_freq_vote_i_channel9_END (30)
#define SOC_PMCTRL_FREQ_VOTE_I4_freq_vote_i4_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_I4_freq_vote_i4_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_i_channel10 : 15;
        unsigned int freq_vote_i5_msk0 : 1;
        unsigned int freq_vote_i_channel11 : 15;
        unsigned int freq_vote_i5_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_I5_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_I5_freq_vote_i_channel10_START (0)
#define SOC_PMCTRL_FREQ_VOTE_I5_freq_vote_i_channel10_END (14)
#define SOC_PMCTRL_FREQ_VOTE_I5_freq_vote_i5_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_I5_freq_vote_i5_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_I5_freq_vote_i_channel11_START (16)
#define SOC_PMCTRL_FREQ_VOTE_I5_freq_vote_i_channel11_END (30)
#define SOC_PMCTRL_FREQ_VOTE_I5_freq_vote_i5_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_I5_freq_vote_i5_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_i_channel12 : 15;
        unsigned int freq_vote_i6_msk0 : 1;
        unsigned int freq_vote_i_channel13 : 15;
        unsigned int freq_vote_i6_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_I6_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_I6_freq_vote_i_channel12_START (0)
#define SOC_PMCTRL_FREQ_VOTE_I6_freq_vote_i_channel12_END (14)
#define SOC_PMCTRL_FREQ_VOTE_I6_freq_vote_i6_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_I6_freq_vote_i6_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_I6_freq_vote_i_channel13_START (16)
#define SOC_PMCTRL_FREQ_VOTE_I6_freq_vote_i_channel13_END (30)
#define SOC_PMCTRL_FREQ_VOTE_I6_freq_vote_i6_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_I6_freq_vote_i6_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_i_channel14 : 15;
        unsigned int freq_vote_i7_msk0 : 1;
        unsigned int freq_vote_i_channel15 : 15;
        unsigned int freq_vote_i7_msk1 : 1;
    } reg;
} SOC_PMCTRL_FREQ_VOTE_I7_UNION;
#endif
#define SOC_PMCTRL_FREQ_VOTE_I7_freq_vote_i_channel14_START (0)
#define SOC_PMCTRL_FREQ_VOTE_I7_freq_vote_i_channel14_END (14)
#define SOC_PMCTRL_FREQ_VOTE_I7_freq_vote_i7_msk0_START (15)
#define SOC_PMCTRL_FREQ_VOTE_I7_freq_vote_i7_msk0_END (15)
#define SOC_PMCTRL_FREQ_VOTE_I7_freq_vote_i_channel15_START (16)
#define SOC_PMCTRL_FREQ_VOTE_I7_freq_vote_i_channel15_END (30)
#define SOC_PMCTRL_FREQ_VOTE_I7_freq_vote_i7_msk1_START (31)
#define SOC_PMCTRL_FREQ_VOTE_I7_freq_vote_i7_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int intr_mask_to_lpmcu : 9;
        unsigned int reserved : 7;
        unsigned int intr_mask_to_lpmcu_msk : 16;
    } reg;
} SOC_PMCTRL_INTR_MASK_TO_LPMCU_UNION;
#endif
#define SOC_PMCTRL_INTR_MASK_TO_LPMCU_intr_mask_to_lpmcu_START (0)
#define SOC_PMCTRL_INTR_MASK_TO_LPMCU_intr_mask_to_lpmcu_END (8)
#define SOC_PMCTRL_INTR_MASK_TO_LPMCU_intr_mask_to_lpmcu_msk_START (16)
#define SOC_PMCTRL_INTR_MASK_TO_LPMCU_intr_mask_to_lpmcu_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int intr_mask_to_cpu_lp_ctrl : 9;
        unsigned int reserved : 7;
        unsigned int intr_mask_to_cpu_lp_ctrl_msk : 16;
    } reg;
} SOC_PMCTRL_INTR_MASK_TO_CPU_LP_CTRL_UNION;
#endif
#define SOC_PMCTRL_INTR_MASK_TO_CPU_LP_CTRL_intr_mask_to_cpu_lp_ctrl_START (0)
#define SOC_PMCTRL_INTR_MASK_TO_CPU_LP_CTRL_intr_mask_to_cpu_lp_ctrl_END (8)
#define SOC_PMCTRL_INTR_MASK_TO_CPU_LP_CTRL_intr_mask_to_cpu_lp_ctrl_msk_START (16)
#define SOC_PMCTRL_INTR_MASK_TO_CPU_LP_CTRL_intr_mask_to_cpu_lp_ctrl_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int intr_mask_to_gpu_lp_ctrl : 9;
        unsigned int reserved : 7;
        unsigned int intr_mask_to_gpu_lp_ctrl_msk : 16;
    } reg;
} SOC_PMCTRL_INTR_MASK_TO_GPU_LP_CTRL_UNION;
#endif
#define SOC_PMCTRL_INTR_MASK_TO_GPU_LP_CTRL_intr_mask_to_gpu_lp_ctrl_START (0)
#define SOC_PMCTRL_INTR_MASK_TO_GPU_LP_CTRL_intr_mask_to_gpu_lp_ctrl_END (8)
#define SOC_PMCTRL_INTR_MASK_TO_GPU_LP_CTRL_intr_mask_to_gpu_lp_ctrl_msk_START (16)
#define SOC_PMCTRL_INTR_MASK_TO_GPU_LP_CTRL_intr_mask_to_gpu_lp_ctrl_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int intr_mask_to_ddr_lp_ctrl : 9;
        unsigned int reserved : 7;
        unsigned int intr_mask_to_ddr_lp_ctrl_msk : 16;
    } reg;
} SOC_PMCTRL_INTR_MASK_TO_DDR_LP_CTRL_UNION;
#endif
#define SOC_PMCTRL_INTR_MASK_TO_DDR_LP_CTRL_intr_mask_to_ddr_lp_ctrl_START (0)
#define SOC_PMCTRL_INTR_MASK_TO_DDR_LP_CTRL_intr_mask_to_ddr_lp_ctrl_END (8)
#define SOC_PMCTRL_INTR_MASK_TO_DDR_LP_CTRL_intr_mask_to_ddr_lp_ctrl_msk_START (16)
#define SOC_PMCTRL_INTR_MASK_TO_DDR_LP_CTRL_intr_mask_to_ddr_lp_ctrl_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_channel_num_a : 2;
        unsigned int freq_vote_channel_num_b : 2;
        unsigned int freq_vote_channel_num_c : 2;
        unsigned int freq_vote_channel_num_d : 2;
        unsigned int freq_vote_channel_num_e : 2;
        unsigned int freq_vote_channel_num_f : 2;
        unsigned int freq_vote_channel_num_g : 2;
        unsigned int freq_vote_channel_num_h : 2;
        unsigned int freq_vote_channel_num_i : 2;
        unsigned int reserved : 14;
    } reg;
} SOC_PMCTRL_VOTE_CHANNEL_CFG_UNION;
#endif
#define SOC_PMCTRL_VOTE_CHANNEL_CFG_freq_vote_channel_num_a_START (0)
#define SOC_PMCTRL_VOTE_CHANNEL_CFG_freq_vote_channel_num_a_END (1)
#define SOC_PMCTRL_VOTE_CHANNEL_CFG_freq_vote_channel_num_b_START (2)
#define SOC_PMCTRL_VOTE_CHANNEL_CFG_freq_vote_channel_num_b_END (3)
#define SOC_PMCTRL_VOTE_CHANNEL_CFG_freq_vote_channel_num_c_START (4)
#define SOC_PMCTRL_VOTE_CHANNEL_CFG_freq_vote_channel_num_c_END (5)
#define SOC_PMCTRL_VOTE_CHANNEL_CFG_freq_vote_channel_num_d_START (6)
#define SOC_PMCTRL_VOTE_CHANNEL_CFG_freq_vote_channel_num_d_END (7)
#define SOC_PMCTRL_VOTE_CHANNEL_CFG_freq_vote_channel_num_e_START (8)
#define SOC_PMCTRL_VOTE_CHANNEL_CFG_freq_vote_channel_num_e_END (9)
#define SOC_PMCTRL_VOTE_CHANNEL_CFG_freq_vote_channel_num_f_START (10)
#define SOC_PMCTRL_VOTE_CHANNEL_CFG_freq_vote_channel_num_f_END (11)
#define SOC_PMCTRL_VOTE_CHANNEL_CFG_freq_vote_channel_num_g_START (12)
#define SOC_PMCTRL_VOTE_CHANNEL_CFG_freq_vote_channel_num_g_END (13)
#define SOC_PMCTRL_VOTE_CHANNEL_CFG_freq_vote_channel_num_h_START (14)
#define SOC_PMCTRL_VOTE_CHANNEL_CFG_freq_vote_channel_num_h_END (15)
#define SOC_PMCTRL_VOTE_CHANNEL_CFG_freq_vote_channel_num_i_START (16)
#define SOC_PMCTRL_VOTE_CHANNEL_CFG_freq_vote_channel_num_i_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_a_type : 2;
        unsigned int freq_vote_b_type : 2;
        unsigned int freq_vote_c_type : 2;
        unsigned int freq_vote_d_type : 2;
        unsigned int freq_vote_e_type : 2;
        unsigned int freq_vote_f_type : 2;
        unsigned int freq_vote_g_type : 2;
        unsigned int freq_vote_h_type : 2;
        unsigned int vote_mode_cfg_0_msk : 16;
    } reg;
} SOC_PMCTRL_VOTE_MODE_CFG_0_UNION;
#endif
#define SOC_PMCTRL_VOTE_MODE_CFG_0_freq_vote_a_type_START (0)
#define SOC_PMCTRL_VOTE_MODE_CFG_0_freq_vote_a_type_END (1)
#define SOC_PMCTRL_VOTE_MODE_CFG_0_freq_vote_b_type_START (2)
#define SOC_PMCTRL_VOTE_MODE_CFG_0_freq_vote_b_type_END (3)
#define SOC_PMCTRL_VOTE_MODE_CFG_0_freq_vote_c_type_START (4)
#define SOC_PMCTRL_VOTE_MODE_CFG_0_freq_vote_c_type_END (5)
#define SOC_PMCTRL_VOTE_MODE_CFG_0_freq_vote_d_type_START (6)
#define SOC_PMCTRL_VOTE_MODE_CFG_0_freq_vote_d_type_END (7)
#define SOC_PMCTRL_VOTE_MODE_CFG_0_freq_vote_e_type_START (8)
#define SOC_PMCTRL_VOTE_MODE_CFG_0_freq_vote_e_type_END (9)
#define SOC_PMCTRL_VOTE_MODE_CFG_0_freq_vote_f_type_START (10)
#define SOC_PMCTRL_VOTE_MODE_CFG_0_freq_vote_f_type_END (11)
#define SOC_PMCTRL_VOTE_MODE_CFG_0_freq_vote_g_type_START (12)
#define SOC_PMCTRL_VOTE_MODE_CFG_0_freq_vote_g_type_END (13)
#define SOC_PMCTRL_VOTE_MODE_CFG_0_freq_vote_h_type_START (14)
#define SOC_PMCTRL_VOTE_MODE_CFG_0_freq_vote_h_type_END (15)
#define SOC_PMCTRL_VOTE_MODE_CFG_0_vote_mode_cfg_0_msk_START (16)
#define SOC_PMCTRL_VOTE_MODE_CFG_0_vote_mode_cfg_0_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_i_type : 2;
        unsigned int reserved_0 : 2;
        unsigned int reserved_1 : 2;
        unsigned int reserved_2 : 2;
        unsigned int reserved_3 : 2;
        unsigned int reserved_4 : 2;
        unsigned int reserved_5 : 2;
        unsigned int reserved_6 : 2;
        unsigned int vote_mode_cfg_1_msk : 16;
    } reg;
} SOC_PMCTRL_VOTE_MODE_CFG_1_UNION;
#endif
#define SOC_PMCTRL_VOTE_MODE_CFG_1_freq_vote_i_type_START (0)
#define SOC_PMCTRL_VOTE_MODE_CFG_1_freq_vote_i_type_END (1)
#define SOC_PMCTRL_VOTE_MODE_CFG_1_vote_mode_cfg_1_msk_START (16)
#define SOC_PMCTRL_VOTE_MODE_CFG_1_vote_mode_cfg_1_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_a_start_en : 1;
        unsigned int freq_vote_b_start_en : 1;
        unsigned int freq_vote_c_start_en : 1;
        unsigned int freq_vote_d_start_en : 1;
        unsigned int freq_vote_e_start_en : 1;
        unsigned int freq_vote_f_start_en : 1;
        unsigned int freq_vote_g_start_en : 1;
        unsigned int freq_vote_h_start_en : 1;
        unsigned int freq_vote_i_start_en : 1;
        unsigned int reserved : 7;
        unsigned int vote_start_en_msk : 16;
    } reg;
} SOC_PMCTRL_VOTE_START_EN_UNION;
#endif
#define SOC_PMCTRL_VOTE_START_EN_freq_vote_a_start_en_START (0)
#define SOC_PMCTRL_VOTE_START_EN_freq_vote_a_start_en_END (0)
#define SOC_PMCTRL_VOTE_START_EN_freq_vote_b_start_en_START (1)
#define SOC_PMCTRL_VOTE_START_EN_freq_vote_b_start_en_END (1)
#define SOC_PMCTRL_VOTE_START_EN_freq_vote_c_start_en_START (2)
#define SOC_PMCTRL_VOTE_START_EN_freq_vote_c_start_en_END (2)
#define SOC_PMCTRL_VOTE_START_EN_freq_vote_d_start_en_START (3)
#define SOC_PMCTRL_VOTE_START_EN_freq_vote_d_start_en_END (3)
#define SOC_PMCTRL_VOTE_START_EN_freq_vote_e_start_en_START (4)
#define SOC_PMCTRL_VOTE_START_EN_freq_vote_e_start_en_END (4)
#define SOC_PMCTRL_VOTE_START_EN_freq_vote_f_start_en_START (5)
#define SOC_PMCTRL_VOTE_START_EN_freq_vote_f_start_en_END (5)
#define SOC_PMCTRL_VOTE_START_EN_freq_vote_g_start_en_START (6)
#define SOC_PMCTRL_VOTE_START_EN_freq_vote_g_start_en_END (6)
#define SOC_PMCTRL_VOTE_START_EN_freq_vote_h_start_en_START (7)
#define SOC_PMCTRL_VOTE_START_EN_freq_vote_h_start_en_END (7)
#define SOC_PMCTRL_VOTE_START_EN_freq_vote_i_start_en_START (8)
#define SOC_PMCTRL_VOTE_START_EN_freq_vote_i_start_en_END (8)
#define SOC_PMCTRL_VOTE_START_EN_vote_start_en_msk_START (16)
#define SOC_PMCTRL_VOTE_START_EN_vote_start_en_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int int_freq_vote_en_a : 1;
        unsigned int int_freq_vote_en_b : 1;
        unsigned int int_freq_vote_en_c : 1;
        unsigned int int_freq_vote_en_d : 1;
        unsigned int int_freq_vote_en_e : 1;
        unsigned int int_freq_vote_en_f : 1;
        unsigned int int_freq_vote_en_g : 1;
        unsigned int int_freq_vote_en_h : 1;
        unsigned int int_freq_vote_en_i : 1;
        unsigned int reserved : 7;
        unsigned int int_vote_en_msk : 16;
    } reg;
} SOC_PMCTRL_INT_VOTE_EN_UNION;
#endif
#define SOC_PMCTRL_INT_VOTE_EN_int_freq_vote_en_a_START (0)
#define SOC_PMCTRL_INT_VOTE_EN_int_freq_vote_en_a_END (0)
#define SOC_PMCTRL_INT_VOTE_EN_int_freq_vote_en_b_START (1)
#define SOC_PMCTRL_INT_VOTE_EN_int_freq_vote_en_b_END (1)
#define SOC_PMCTRL_INT_VOTE_EN_int_freq_vote_en_c_START (2)
#define SOC_PMCTRL_INT_VOTE_EN_int_freq_vote_en_c_END (2)
#define SOC_PMCTRL_INT_VOTE_EN_int_freq_vote_en_d_START (3)
#define SOC_PMCTRL_INT_VOTE_EN_int_freq_vote_en_d_END (3)
#define SOC_PMCTRL_INT_VOTE_EN_int_freq_vote_en_e_START (4)
#define SOC_PMCTRL_INT_VOTE_EN_int_freq_vote_en_e_END (4)
#define SOC_PMCTRL_INT_VOTE_EN_int_freq_vote_en_f_START (5)
#define SOC_PMCTRL_INT_VOTE_EN_int_freq_vote_en_f_END (5)
#define SOC_PMCTRL_INT_VOTE_EN_int_freq_vote_en_g_START (6)
#define SOC_PMCTRL_INT_VOTE_EN_int_freq_vote_en_g_END (6)
#define SOC_PMCTRL_INT_VOTE_EN_int_freq_vote_en_h_START (7)
#define SOC_PMCTRL_INT_VOTE_EN_int_freq_vote_en_h_END (7)
#define SOC_PMCTRL_INT_VOTE_EN_int_freq_vote_en_i_START (8)
#define SOC_PMCTRL_INT_VOTE_EN_int_freq_vote_en_i_END (8)
#define SOC_PMCTRL_INT_VOTE_EN_int_vote_en_msk_START (16)
#define SOC_PMCTRL_INT_VOTE_EN_int_vote_en_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int int_freq_vote_a_clr : 1;
        unsigned int int_freq_vote_b_clr : 1;
        unsigned int int_freq_vote_c_clr : 1;
        unsigned int int_freq_vote_d_clr : 1;
        unsigned int int_freq_vote_e_clr : 1;
        unsigned int int_freq_vote_f_clr : 1;
        unsigned int int_freq_vote_g_clr : 1;
        unsigned int int_freq_vote_h_clr : 1;
        unsigned int int_freq_vote_i_clr : 1;
        unsigned int reserved_0 : 7;
        unsigned int reserved_1 : 16;
    } reg;
} SOC_PMCTRL_INT_VOTE_CLR_UNION;
#endif
#define SOC_PMCTRL_INT_VOTE_CLR_int_freq_vote_a_clr_START (0)
#define SOC_PMCTRL_INT_VOTE_CLR_int_freq_vote_a_clr_END (0)
#define SOC_PMCTRL_INT_VOTE_CLR_int_freq_vote_b_clr_START (1)
#define SOC_PMCTRL_INT_VOTE_CLR_int_freq_vote_b_clr_END (1)
#define SOC_PMCTRL_INT_VOTE_CLR_int_freq_vote_c_clr_START (2)
#define SOC_PMCTRL_INT_VOTE_CLR_int_freq_vote_c_clr_END (2)
#define SOC_PMCTRL_INT_VOTE_CLR_int_freq_vote_d_clr_START (3)
#define SOC_PMCTRL_INT_VOTE_CLR_int_freq_vote_d_clr_END (3)
#define SOC_PMCTRL_INT_VOTE_CLR_int_freq_vote_e_clr_START (4)
#define SOC_PMCTRL_INT_VOTE_CLR_int_freq_vote_e_clr_END (4)
#define SOC_PMCTRL_INT_VOTE_CLR_int_freq_vote_f_clr_START (5)
#define SOC_PMCTRL_INT_VOTE_CLR_int_freq_vote_f_clr_END (5)
#define SOC_PMCTRL_INT_VOTE_CLR_int_freq_vote_g_clr_START (6)
#define SOC_PMCTRL_INT_VOTE_CLR_int_freq_vote_g_clr_END (6)
#define SOC_PMCTRL_INT_VOTE_CLR_int_freq_vote_h_clr_START (7)
#define SOC_PMCTRL_INT_VOTE_CLR_int_freq_vote_h_clr_END (7)
#define SOC_PMCTRL_INT_VOTE_CLR_int_freq_vote_i_clr_START (8)
#define SOC_PMCTRL_INT_VOTE_CLR_int_freq_vote_i_clr_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int int_freq_vote_raw_stat_a : 1;
        unsigned int int_freq_vote_raw_stat_b : 1;
        unsigned int int_freq_vote_raw_stat_c : 1;
        unsigned int int_freq_vote_raw_stat_d : 1;
        unsigned int int_freq_vote_raw_stat_e : 1;
        unsigned int int_freq_vote_raw_stat_f : 1;
        unsigned int int_freq_vote_raw_stat_g : 1;
        unsigned int int_freq_vote_raw_stat_h : 1;
        unsigned int int_freq_vote_raw_stat_i : 1;
        unsigned int reserved_0 : 7;
        unsigned int reserved_1 : 16;
    } reg;
} SOC_PMCTRL_INT_VOTE_RAW_STAT_UNION;
#endif
#define SOC_PMCTRL_INT_VOTE_RAW_STAT_int_freq_vote_raw_stat_a_START (0)
#define SOC_PMCTRL_INT_VOTE_RAW_STAT_int_freq_vote_raw_stat_a_END (0)
#define SOC_PMCTRL_INT_VOTE_RAW_STAT_int_freq_vote_raw_stat_b_START (1)
#define SOC_PMCTRL_INT_VOTE_RAW_STAT_int_freq_vote_raw_stat_b_END (1)
#define SOC_PMCTRL_INT_VOTE_RAW_STAT_int_freq_vote_raw_stat_c_START (2)
#define SOC_PMCTRL_INT_VOTE_RAW_STAT_int_freq_vote_raw_stat_c_END (2)
#define SOC_PMCTRL_INT_VOTE_RAW_STAT_int_freq_vote_raw_stat_d_START (3)
#define SOC_PMCTRL_INT_VOTE_RAW_STAT_int_freq_vote_raw_stat_d_END (3)
#define SOC_PMCTRL_INT_VOTE_RAW_STAT_int_freq_vote_raw_stat_e_START (4)
#define SOC_PMCTRL_INT_VOTE_RAW_STAT_int_freq_vote_raw_stat_e_END (4)
#define SOC_PMCTRL_INT_VOTE_RAW_STAT_int_freq_vote_raw_stat_f_START (5)
#define SOC_PMCTRL_INT_VOTE_RAW_STAT_int_freq_vote_raw_stat_f_END (5)
#define SOC_PMCTRL_INT_VOTE_RAW_STAT_int_freq_vote_raw_stat_g_START (6)
#define SOC_PMCTRL_INT_VOTE_RAW_STAT_int_freq_vote_raw_stat_g_END (6)
#define SOC_PMCTRL_INT_VOTE_RAW_STAT_int_freq_vote_raw_stat_h_START (7)
#define SOC_PMCTRL_INT_VOTE_RAW_STAT_int_freq_vote_raw_stat_h_END (7)
#define SOC_PMCTRL_INT_VOTE_RAW_STAT_int_freq_vote_raw_stat_i_START (8)
#define SOC_PMCTRL_INT_VOTE_RAW_STAT_int_freq_vote_raw_stat_i_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int int_freq_vote_stat_a : 1;
        unsigned int int_freq_vote_stat_b : 1;
        unsigned int int_freq_vote_stat_c : 1;
        unsigned int int_freq_vote_stat_d : 1;
        unsigned int int_freq_vote_stat_e : 1;
        unsigned int int_freq_vote_stat_f : 1;
        unsigned int int_freq_vote_stat_g : 1;
        unsigned int int_freq_vote_stat_h : 1;
        unsigned int int_freq_vote_stat_i : 1;
        unsigned int reserved_0 : 7;
        unsigned int reserved_1 : 16;
    } reg;
} SOC_PMCTRL_INT_VOTE_STAT_UNION;
#endif
#define SOC_PMCTRL_INT_VOTE_STAT_int_freq_vote_stat_a_START (0)
#define SOC_PMCTRL_INT_VOTE_STAT_int_freq_vote_stat_a_END (0)
#define SOC_PMCTRL_INT_VOTE_STAT_int_freq_vote_stat_b_START (1)
#define SOC_PMCTRL_INT_VOTE_STAT_int_freq_vote_stat_b_END (1)
#define SOC_PMCTRL_INT_VOTE_STAT_int_freq_vote_stat_c_START (2)
#define SOC_PMCTRL_INT_VOTE_STAT_int_freq_vote_stat_c_END (2)
#define SOC_PMCTRL_INT_VOTE_STAT_int_freq_vote_stat_d_START (3)
#define SOC_PMCTRL_INT_VOTE_STAT_int_freq_vote_stat_d_END (3)
#define SOC_PMCTRL_INT_VOTE_STAT_int_freq_vote_stat_e_START (4)
#define SOC_PMCTRL_INT_VOTE_STAT_int_freq_vote_stat_e_END (4)
#define SOC_PMCTRL_INT_VOTE_STAT_int_freq_vote_stat_f_START (5)
#define SOC_PMCTRL_INT_VOTE_STAT_int_freq_vote_stat_f_END (5)
#define SOC_PMCTRL_INT_VOTE_STAT_int_freq_vote_stat_g_START (6)
#define SOC_PMCTRL_INT_VOTE_STAT_int_freq_vote_stat_g_END (6)
#define SOC_PMCTRL_INT_VOTE_STAT_int_freq_vote_stat_h_START (7)
#define SOC_PMCTRL_INT_VOTE_STAT_int_freq_vote_stat_h_END (7)
#define SOC_PMCTRL_INT_VOTE_STAT_int_freq_vote_stat_i_START (8)
#define SOC_PMCTRL_INT_VOTE_STAT_int_freq_vote_stat_i_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int int_frequency_vote : 1;
        unsigned int intr_freq_vote_to_cpu_lp_ctrl : 1;
        unsigned int intr_freq_vote_to_gpu_lp_ctrl : 1;
        unsigned int intr_freq_vote_to_ddr_lp_ctrl : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_PMCTRL_INT_FREQUENCY_VOTE_UNION;
#endif
#define SOC_PMCTRL_INT_FREQUENCY_VOTE_int_frequency_vote_START (0)
#define SOC_PMCTRL_INT_FREQUENCY_VOTE_int_frequency_vote_END (0)
#define SOC_PMCTRL_INT_FREQUENCY_VOTE_intr_freq_vote_to_cpu_lp_ctrl_START (1)
#define SOC_PMCTRL_INT_FREQUENCY_VOTE_intr_freq_vote_to_cpu_lp_ctrl_END (1)
#define SOC_PMCTRL_INT_FREQUENCY_VOTE_intr_freq_vote_to_gpu_lp_ctrl_START (2)
#define SOC_PMCTRL_INT_FREQUENCY_VOTE_intr_freq_vote_to_gpu_lp_ctrl_END (2)
#define SOC_PMCTRL_INT_FREQUENCY_VOTE_intr_freq_vote_to_ddr_lp_ctrl_START (3)
#define SOC_PMCTRL_INT_FREQUENCY_VOTE_intr_freq_vote_to_ddr_lp_ctrl_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_result_a : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_PMCTRL_VOTE_RESULT_A_UNION;
#endif
#define SOC_PMCTRL_VOTE_RESULT_A_freq_vote_result_a_START (0)
#define SOC_PMCTRL_VOTE_RESULT_A_freq_vote_result_a_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_result_b : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_PMCTRL_VOTE_RESULT_B_UNION;
#endif
#define SOC_PMCTRL_VOTE_RESULT_B_freq_vote_result_b_START (0)
#define SOC_PMCTRL_VOTE_RESULT_B_freq_vote_result_b_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_result_c : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_PMCTRL_VOTE_RESULT_C_UNION;
#endif
#define SOC_PMCTRL_VOTE_RESULT_C_freq_vote_result_c_START (0)
#define SOC_PMCTRL_VOTE_RESULT_C_freq_vote_result_c_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_result_d : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_PMCTRL_VOTE_RESULT_D_UNION;
#endif
#define SOC_PMCTRL_VOTE_RESULT_D_freq_vote_result_d_START (0)
#define SOC_PMCTRL_VOTE_RESULT_D_freq_vote_result_d_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_result_e : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_PMCTRL_VOTE_RESULT_E_UNION;
#endif
#define SOC_PMCTRL_VOTE_RESULT_E_freq_vote_result_e_START (0)
#define SOC_PMCTRL_VOTE_RESULT_E_freq_vote_result_e_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_result_f : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_PMCTRL_VOTE_RESULT_F_UNION;
#endif
#define SOC_PMCTRL_VOTE_RESULT_F_freq_vote_result_f_START (0)
#define SOC_PMCTRL_VOTE_RESULT_F_freq_vote_result_f_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_result_g : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_PMCTRL_VOTE_RESULT_G_UNION;
#endif
#define SOC_PMCTRL_VOTE_RESULT_G_freq_vote_result_g_START (0)
#define SOC_PMCTRL_VOTE_RESULT_G_freq_vote_result_g_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_result_h : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_PMCTRL_VOTE_RESULT_H_UNION;
#endif
#define SOC_PMCTRL_VOTE_RESULT_H_freq_vote_result_h_START (0)
#define SOC_PMCTRL_VOTE_RESULT_H_freq_vote_result_h_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int freq_vote_result_i : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_PMCTRL_VOTE_RESULT_I_UNION;
#endif
#define SOC_PMCTRL_VOTE_RESULT_I_freq_vote_result_i_START (0)
#define SOC_PMCTRL_VOTE_RESULT_I_freq_vote_result_i_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int dbg_ctrl_core_crg : 1;
        unsigned int dbg_ctrl_cssys : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int dbg_ctrl_pmc : 1;
        unsigned int dbg_ctrl_crg : 1;
        unsigned int reserved_4 : 24;
    } reg;
} SOC_PMCTRL_PERI_CTRL0_UNION;
#endif
#define SOC_PMCTRL_PERI_CTRL0_dbg_ctrl_core_crg_START (0)
#define SOC_PMCTRL_PERI_CTRL0_dbg_ctrl_core_crg_END (0)
#define SOC_PMCTRL_PERI_CTRL0_dbg_ctrl_cssys_START (1)
#define SOC_PMCTRL_PERI_CTRL0_dbg_ctrl_cssys_END (1)
#define SOC_PMCTRL_PERI_CTRL0_dbg_ctrl_pmc_START (6)
#define SOC_PMCTRL_PERI_CTRL0_dbg_ctrl_pmc_END (6)
#define SOC_PMCTRL_PERI_CTRL0_dbg_ctrl_crg_START (7)
#define SOC_PMCTRL_PERI_CTRL0_dbg_ctrl_crg_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int reserved_0: 10;
        unsigned int reserved_1: 6;
        unsigned int reserved_2: 10;
        unsigned int reserved_3: 6;
    } reg;
} SOC_PMCTRL_PERI_CTRL1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int cluster0_vol_addr : 10;
        unsigned int reserved_0 : 6;
        unsigned int reserved_1 : 10;
        unsigned int reserved_2 : 6;
    } reg;
} SOC_PMCTRL_PERI_CTRL2_UNION;
#endif
#define SOC_PMCTRL_PERI_CTRL2_cluster0_vol_addr_START (0)
#define SOC_PMCTRL_PERI_CTRL2_cluster0_vol_addr_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int g3d_mem_vol_addr : 10;
        unsigned int reserved_0 : 6;
        unsigned int peri_vol_addr : 10;
        unsigned int reserved_1 : 6;
    } reg;
} SOC_PMCTRL_PERI_CTRL3_UNION;
#endif
#define SOC_PMCTRL_PERI_CTRL3_g3d_mem_vol_addr_START (0)
#define SOC_PMCTRL_PERI_CTRL3_g3d_mem_vol_addr_END (9)
#define SOC_PMCTRL_PERI_CTRL3_peri_vol_addr_START (16)
#define SOC_PMCTRL_PERI_CTRL3_peri_vol_addr_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int reserved_0: 16;
        unsigned int reserved_1: 16;
    } reg;
} SOC_PMCTRL_PERI_CTRL4_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int reserved : 32;
    } reg;
} SOC_PMCTRL_PERI_CTRL5_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int reserved_0: 2;
        unsigned int reserved_1: 2;
        unsigned int reserved_2: 3;
        unsigned int reserved_3: 1;
        unsigned int reserved_4: 24;
    } reg;
} SOC_PMCTRL_PERI_CTRL6_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int ispdss2ddr_dfs_ongoing : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_PMCTRL_PERI_CTRL7_UNION;
#endif
#define SOC_PMCTRL_PERI_CTRL7_ispdss2ddr_dfs_ongoing_START (0)
#define SOC_PMCTRL_PERI_CTRL7_ispdss2ddr_dfs_ongoing_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int reserved : 32;
    } reg;
} SOC_PMCTRL_PERI_STAT0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int dbg_info_cssys : 32;
    } reg;
} SOC_PMCTRL_PERI_STAT1_UNION;
#endif
#define SOC_PMCTRL_PERI_STAT1_dbg_info_cssys_START (0)
#define SOC_PMCTRL_PERI_STAT1_dbg_info_cssys_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int reserved : 32;
    } reg;
} SOC_PMCTRL_PERI_STAT2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int reserved : 32;
    } reg;
} SOC_PMCTRL_PERI_STAT3_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int reserved : 32;
    } reg;
} SOC_PMCTRL_PERI_STAT4_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int qic_cfgbus_pwrd_req : 1;
        unsigned int ddrxpu_pwrd_req : 1;
        unsigned int qic_mdmperi_bus_pwrd_req : 1;
        unsigned int qic_modem_pwrd_req : 1;
        unsigned int qic_hsdt0_pwrd_req : 1;
        unsigned int qic_hsdt1_pwrd_req : 1;
        unsigned int qic_usb_pwrd_req : 1;
        unsigned int qic_eps_ree_pwrd_req : 1;
        unsigned int reserved_0 : 1;
        unsigned int qic_pcie0_pwrd_req : 1;
        unsigned int qic_pcie1_pwrd_req : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int biten : 16;
    } reg;
} SOC_PMCTRL_QIC_POWER_IDLEREQ_0_UNION;
#endif
#define SOC_PMCTRL_QIC_POWER_IDLEREQ_0_qic_cfgbus_pwrd_req_START (0)
#define SOC_PMCTRL_QIC_POWER_IDLEREQ_0_qic_cfgbus_pwrd_req_END (0)
#define SOC_PMCTRL_QIC_POWER_IDLEREQ_0_ddrxpu_pwrd_req_START (1)
#define SOC_PMCTRL_QIC_POWER_IDLEREQ_0_ddrxpu_pwrd_req_END (1)
#define SOC_PMCTRL_QIC_POWER_IDLEREQ_0_qic_mdmperi_bus_pwrd_req_START (2)
#define SOC_PMCTRL_QIC_POWER_IDLEREQ_0_qic_mdmperi_bus_pwrd_req_END (2)
#define SOC_PMCTRL_QIC_POWER_IDLEREQ_0_qic_modem_pwrd_req_START (3)
#define SOC_PMCTRL_QIC_POWER_IDLEREQ_0_qic_modem_pwrd_req_END (3)
#define SOC_PMCTRL_QIC_POWER_IDLEREQ_0_qic_hsdt0_pwrd_req_START (4)
#define SOC_PMCTRL_QIC_POWER_IDLEREQ_0_qic_hsdt0_pwrd_req_END (4)
#define SOC_PMCTRL_QIC_POWER_IDLEREQ_0_qic_hsdt1_pwrd_req_START (5)
#define SOC_PMCTRL_QIC_POWER_IDLEREQ_0_qic_hsdt1_pwrd_req_END (5)
#define SOC_PMCTRL_QIC_POWER_IDLEREQ_0_qic_usb_pwrd_req_START (6)
#define SOC_PMCTRL_QIC_POWER_IDLEREQ_0_qic_usb_pwrd_req_END (6)
#define SOC_PMCTRL_QIC_POWER_IDLEREQ_0_qic_eps_ree_pwrd_req_START (7)
#define SOC_PMCTRL_QIC_POWER_IDLEREQ_0_qic_eps_ree_pwrd_req_END (7)
#define SOC_PMCTRL_QIC_POWER_IDLEREQ_0_qic_pcie0_pwrd_req_START (9)
#define SOC_PMCTRL_QIC_POWER_IDLEREQ_0_qic_pcie0_pwrd_req_END (9)
#define SOC_PMCTRL_QIC_POWER_IDLEREQ_0_qic_pcie1_pwrd_req_START (10)
#define SOC_PMCTRL_QIC_POWER_IDLEREQ_0_qic_pcie1_pwrd_req_END (10)
#define SOC_PMCTRL_QIC_POWER_IDLEREQ_0_biten_START (16)
#define SOC_PMCTRL_QIC_POWER_IDLEREQ_0_biten_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int qic_cfgbus_pwrd_ack : 1;
        unsigned int ddrxpu_pwrd_ack : 1;
        unsigned int qic_mdmperi_bus_pwrd_ack : 1;
        unsigned int qic_modem_pwrd_ack : 1;
        unsigned int qic_hsdt0_pwrd_ack : 1;
        unsigned int qic_hsdt1_pwrd_ack : 1;
        unsigned int qic_usb_pwrd_ack : 1;
        unsigned int qic_eps_ree_pwrd_ack : 1;
        unsigned int reserved_0 : 1;
        unsigned int qic_pcie0_pwrd_ack : 1;
        unsigned int qic_pcie1_pwrd_ack : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 16;
    } reg;
} SOC_PMCTRL_QIC_POWER_IDLEACK_0_UNION;
#endif
#define SOC_PMCTRL_QIC_POWER_IDLEACK_0_qic_cfgbus_pwrd_ack_START (0)
#define SOC_PMCTRL_QIC_POWER_IDLEACK_0_qic_cfgbus_pwrd_ack_END (0)
#define SOC_PMCTRL_QIC_POWER_IDLEACK_0_ddrxpu_pwrd_ack_START (1)
#define SOC_PMCTRL_QIC_POWER_IDLEACK_0_ddrxpu_pwrd_ack_END (1)
#define SOC_PMCTRL_QIC_POWER_IDLEACK_0_qic_mdmperi_bus_pwrd_ack_START (2)
#define SOC_PMCTRL_QIC_POWER_IDLEACK_0_qic_mdmperi_bus_pwrd_ack_END (2)
#define SOC_PMCTRL_QIC_POWER_IDLEACK_0_qic_modem_pwrd_ack_START (3)
#define SOC_PMCTRL_QIC_POWER_IDLEACK_0_qic_modem_pwrd_ack_END (3)
#define SOC_PMCTRL_QIC_POWER_IDLEACK_0_qic_hsdt0_pwrd_ack_START (4)
#define SOC_PMCTRL_QIC_POWER_IDLEACK_0_qic_hsdt0_pwrd_ack_END (4)
#define SOC_PMCTRL_QIC_POWER_IDLEACK_0_qic_hsdt1_pwrd_ack_START (5)
#define SOC_PMCTRL_QIC_POWER_IDLEACK_0_qic_hsdt1_pwrd_ack_END (5)
#define SOC_PMCTRL_QIC_POWER_IDLEACK_0_qic_usb_pwrd_ack_START (6)
#define SOC_PMCTRL_QIC_POWER_IDLEACK_0_qic_usb_pwrd_ack_END (6)
#define SOC_PMCTRL_QIC_POWER_IDLEACK_0_qic_eps_ree_pwrd_ack_START (7)
#define SOC_PMCTRL_QIC_POWER_IDLEACK_0_qic_eps_ree_pwrd_ack_END (7)
#define SOC_PMCTRL_QIC_POWER_IDLEACK_0_qic_pcie0_pwrd_ack_START (9)
#define SOC_PMCTRL_QIC_POWER_IDLEACK_0_qic_pcie0_pwrd_ack_END (9)
#define SOC_PMCTRL_QIC_POWER_IDLEACK_0_qic_pcie1_pwrd_ack_START (10)
#define SOC_PMCTRL_QIC_POWER_IDLEACK_0_qic_pcie1_pwrd_ack_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int reserved_0: 1;
        unsigned int reserved_1: 1;
        unsigned int reserved_2: 1;
        unsigned int reserved_3: 1;
        unsigned int reserved_4: 1;
        unsigned int reserved_5: 1;
        unsigned int reserved_6: 1;
        unsigned int reserved_7: 1;
        unsigned int reserved_8: 1;
        unsigned int reserved_9: 1;
        unsigned int reserved_10: 1;
        unsigned int reserved_11: 1;
        unsigned int reserved_12: 1;
        unsigned int reserved_13: 1;
        unsigned int reserved_14: 1;
        unsigned int reserved_15: 1;
        unsigned int reserved_16: 16;
    } reg;
} SOC_PMCTRL_QIC_POWER_IDLE_0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int bootrom_flag : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_PMCTRL_BOOTROMFLAG_UNION;
#endif
#define SOC_PMCTRL_BOOTROMFLAG_bootrom_flag_START (0)
#define SOC_PMCTRL_BOOTROMFLAG_bootrom_flag_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_hpm_en : 1;
        unsigned int reserved_0 : 3;
        unsigned int peri_hpmx_en : 1;
        unsigned int reserved_1 : 3;
        unsigned int peri_hpm_opc_min_en : 1;
        unsigned int reserved_2 : 3;
        unsigned int peri_hpmx_opc_min_en : 1;
        unsigned int reserved_3 : 19;
    } reg;
} SOC_PMCTRL_PERIHPMEN_UNION;
#endif
#define SOC_PMCTRL_PERIHPMEN_peri_hpm_en_START (0)
#define SOC_PMCTRL_PERIHPMEN_peri_hpm_en_END (0)
#define SOC_PMCTRL_PERIHPMEN_peri_hpmx_en_START (4)
#define SOC_PMCTRL_PERIHPMEN_peri_hpmx_en_END (4)
#define SOC_PMCTRL_PERIHPMEN_peri_hpm_opc_min_en_START (8)
#define SOC_PMCTRL_PERIHPMEN_peri_hpm_opc_min_en_END (8)
#define SOC_PMCTRL_PERIHPMEN_peri_hpmx_opc_min_en_START (12)
#define SOC_PMCTRL_PERIHPMEN_peri_hpmx_opc_min_en_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_hpm_clk_div : 6;
        unsigned int reserved_0 : 2;
        unsigned int peri_hpm_opc_min : 10;
        unsigned int reserved_1 : 2;
        unsigned int peri_hpmx_opc_min : 10;
        unsigned int reserved_2 : 2;
    } reg;
} SOC_PMCTRL_PERIHPMCLKDIV_UNION;
#endif
#define SOC_PMCTRL_PERIHPMCLKDIV_peri_hpm_clk_div_START (0)
#define SOC_PMCTRL_PERIHPMCLKDIV_peri_hpm_clk_div_END (5)
#define SOC_PMCTRL_PERIHPMCLKDIV_peri_hpm_opc_min_START (8)
#define SOC_PMCTRL_PERIHPMCLKDIV_peri_hpm_opc_min_END (17)
#define SOC_PMCTRL_PERIHPMCLKDIV_peri_hpmx_opc_min_START (20)
#define SOC_PMCTRL_PERIHPMCLKDIV_peri_hpmx_opc_min_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_hpm_opc : 10;
        unsigned int reserved_0 : 2;
        unsigned int peri_hpm_opc_vld : 1;
        unsigned int reserved_1 : 3;
        unsigned int peri_hpmx_opc : 10;
        unsigned int reserved_2 : 2;
        unsigned int peri_hpmx_opc_vld : 1;
        unsigned int reserved_3 : 3;
    } reg;
} SOC_PMCTRL_PERIHPMOPC_UNION;
#endif
#define SOC_PMCTRL_PERIHPMOPC_peri_hpm_opc_START (0)
#define SOC_PMCTRL_PERIHPMOPC_peri_hpm_opc_END (9)
#define SOC_PMCTRL_PERIHPMOPC_peri_hpm_opc_vld_START (12)
#define SOC_PMCTRL_PERIHPMOPC_peri_hpm_opc_vld_END (12)
#define SOC_PMCTRL_PERIHPMOPC_peri_hpmx_opc_START (16)
#define SOC_PMCTRL_PERIHPMOPC_peri_hpmx_opc_END (25)
#define SOC_PMCTRL_PERIHPMOPC_peri_hpmx_opc_vld_START (28)
#define SOC_PMCTRL_PERIHPMOPC_peri_hpmx_opc_vld_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int uce_prog_stat_a : 8;
        unsigned int uce_prog_stat_b : 8;
        unsigned int uce_prog_stat_c : 8;
        unsigned int uce_prog_stat_d : 8;
    } reg;
} SOC_PMCTRL_PERI_STAT8_UNION;
#endif
#define SOC_PMCTRL_PERI_STAT8_uce_prog_stat_a_START (0)
#define SOC_PMCTRL_PERI_STAT8_uce_prog_stat_a_END (7)
#define SOC_PMCTRL_PERI_STAT8_uce_prog_stat_b_START (8)
#define SOC_PMCTRL_PERI_STAT8_uce_prog_stat_b_END (15)
#define SOC_PMCTRL_PERI_STAT8_uce_prog_stat_c_START (16)
#define SOC_PMCTRL_PERI_STAT8_uce_prog_stat_c_END (23)
#define SOC_PMCTRL_PERI_STAT8_uce_prog_stat_d_START (24)
#define SOC_PMCTRL_PERI_STAT8_uce_prog_stat_d_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int reserved : 32;
    } reg;
} SOC_PMCTRL_PERI_STAT9_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int reserved : 32;
    } reg;
} SOC_PMCTRL_PERI_STAT10_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int reserved : 32;
    } reg;
} SOC_PMCTRL_PERI_STAT11_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int dbg_info_pmc : 32;
    } reg;
} SOC_PMCTRL_PERI_STAT12_UNION;
#endif
#define SOC_PMCTRL_PERI_STAT12_dbg_info_pmc_START (0)
#define SOC_PMCTRL_PERI_STAT12_dbg_info_pmc_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int dbg_info_crg : 32;
    } reg;
} SOC_PMCTRL_PERI_STAT13_UNION;
#endif
#define SOC_PMCTRL_PERI_STAT13_dbg_info_crg_START (0)
#define SOC_PMCTRL_PERI_STAT13_dbg_info_crg_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int reserved : 32;
    } reg;
} SOC_PMCTRL_PERI_STAT14_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int reserved : 32;
    } reg;
} SOC_PMCTRL_PERI_STAT15_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_vol_idx_0 : 32;
    } reg;
} SOC_PMCTRL_PERI_VOTE_VOL_IDX_0_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_0_peri_vote_vol_idx_0_START (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_0_peri_vote_vol_idx_0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_vol_idx_1 : 32;
    } reg;
} SOC_PMCTRL_PERI_VOTE_VOL_IDX_1_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_1_peri_vote_vol_idx_1_START (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_1_peri_vote_vol_idx_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_vol_idx_2 : 32;
    } reg;
} SOC_PMCTRL_PERI_VOTE_VOL_IDX_2_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_2_peri_vote_vol_idx_2_START (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_2_peri_vote_vol_idx_2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_vol_idx_3 : 32;
    } reg;
} SOC_PMCTRL_PERI_VOTE_VOL_IDX_3_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_3_peri_vote_vol_idx_3_START (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_3_peri_vote_vol_idx_3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_vol_idx_4 : 32;
    } reg;
} SOC_PMCTRL_PERI_VOTE_VOL_IDX_4_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_4_peri_vote_vol_idx_4_START (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_4_peri_vote_vol_idx_4_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_vol_idx_5 : 32;
    } reg;
} SOC_PMCTRL_PERI_VOTE_VOL_IDX_5_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_5_peri_vote_vol_idx_5_START (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_5_peri_vote_vol_idx_5_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_vol_idx_6 : 32;
    } reg;
} SOC_PMCTRL_PERI_VOTE_VOL_IDX_6_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_6_peri_vote_vol_idx_6_START (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_6_peri_vote_vol_idx_6_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_vol_idx_7 : 32;
    } reg;
} SOC_PMCTRL_PERI_VOTE_VOL_IDX_7_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_7_peri_vote_vol_idx_7_START (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_7_peri_vote_vol_idx_7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_vol_idx_8 : 32;
    } reg;
} SOC_PMCTRL_PERI_VOTE_VOL_IDX_8_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_8_peri_vote_vol_idx_8_START (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_8_peri_vote_vol_idx_8_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_vol_idx_9 : 32;
    } reg;
} SOC_PMCTRL_PERI_VOTE_VOL_IDX_9_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_9_peri_vote_vol_idx_9_START (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_9_peri_vote_vol_idx_9_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_vol_idx_10 : 32;
    } reg;
} SOC_PMCTRL_PERI_VOTE_VOL_IDX_10_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_10_peri_vote_vol_idx_10_START (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_10_peri_vote_vol_idx_10_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_vol_idx_11 : 32;
    } reg;
} SOC_PMCTRL_PERI_VOTE_VOL_IDX_11_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_11_peri_vote_vol_idx_11_START (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_11_peri_vote_vol_idx_11_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_vol_idx_12 : 32;
    } reg;
} SOC_PMCTRL_PERI_VOTE_VOL_IDX_12_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_12_peri_vote_vol_idx_12_START (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_12_peri_vote_vol_idx_12_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_vol_idx_13 : 32;
    } reg;
} SOC_PMCTRL_PERI_VOTE_VOL_IDX_13_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_13_peri_vote_vol_idx_13_START (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_13_peri_vote_vol_idx_13_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_vol_idx_14 : 32;
    } reg;
} SOC_PMCTRL_PERI_VOTE_VOL_IDX_14_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_14_peri_vote_vol_idx_14_START (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_14_peri_vote_vol_idx_14_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_vol_idx_15 : 32;
    } reg;
} SOC_PMCTRL_PERI_VOTE_VOL_IDX_15_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_15_peri_vote_vol_idx_15_START (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_15_peri_vote_vol_idx_15_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_vol_idx_group_0 : 32;
    } reg;
} SOC_PMCTRL_PERI_VOTE_VOL_IDX_GROUP_0_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_GROUP_0_peri_vote_vol_idx_group_0_START (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_GROUP_0_peri_vote_vol_idx_group_0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_vol_idx_group_1 : 32;
    } reg;
} SOC_PMCTRL_PERI_VOTE_VOL_IDX_GROUP_1_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_GROUP_1_peri_vote_vol_idx_group_1_START (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_GROUP_1_peri_vote_vol_idx_group_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_vol_idx_group_2 : 32;
    } reg;
} SOC_PMCTRL_PERI_VOTE_VOL_IDX_GROUP_2_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_GROUP_2_peri_vote_vol_idx_group_2_START (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_GROUP_2_peri_vote_vol_idx_group_2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_vol_idx_group_3 : 32;
    } reg;
} SOC_PMCTRL_PERI_VOTE_VOL_IDX_GROUP_3_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_GROUP_3_peri_vote_vol_idx_group_3_START (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_IDX_GROUP_3_peri_vote_vol_idx_group_3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_vol_rank_0 : 2;
        unsigned int peri_vote_vol_rank_1 : 2;
        unsigned int peri_vote_vol_rank_2 : 2;
        unsigned int peri_vote_vol_rank_3 : 2;
        unsigned int peri_vote_vol_rank_4 : 2;
        unsigned int peri_vote_vol_rank_5 : 2;
        unsigned int peri_vote_vol_rank_6 : 2;
        unsigned int peri_vote_vol_rank_7 : 2;
        unsigned int reserved : 16;
    } reg;
} SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_0_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_0_peri_vote_vol_rank_0_START (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_0_peri_vote_vol_rank_0_END (1)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_0_peri_vote_vol_rank_1_START (2)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_0_peri_vote_vol_rank_1_END (3)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_0_peri_vote_vol_rank_2_START (4)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_0_peri_vote_vol_rank_2_END (5)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_0_peri_vote_vol_rank_3_START (6)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_0_peri_vote_vol_rank_3_END (7)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_0_peri_vote_vol_rank_4_START (8)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_0_peri_vote_vol_rank_4_END (9)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_0_peri_vote_vol_rank_5_START (10)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_0_peri_vote_vol_rank_5_END (11)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_0_peri_vote_vol_rank_6_START (12)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_0_peri_vote_vol_rank_6_END (13)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_0_peri_vote_vol_rank_7_START (14)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_0_peri_vote_vol_rank_7_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_vol_rank_8 : 2;
        unsigned int peri_vote_vol_rank_9 : 2;
        unsigned int peri_vote_vol_rank_10 : 2;
        unsigned int peri_vote_vol_rank_11 : 2;
        unsigned int peri_vote_vol_rank_12 : 2;
        unsigned int peri_vote_vol_rank_13 : 2;
        unsigned int peri_vote_vol_rank_14 : 2;
        unsigned int peri_vote_vol_rank_15 : 2;
        unsigned int reserved : 16;
    } reg;
} SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_1_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_1_peri_vote_vol_rank_8_START (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_1_peri_vote_vol_rank_8_END (1)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_1_peri_vote_vol_rank_9_START (2)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_1_peri_vote_vol_rank_9_END (3)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_1_peri_vote_vol_rank_10_START (4)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_1_peri_vote_vol_rank_10_END (5)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_1_peri_vote_vol_rank_11_START (6)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_1_peri_vote_vol_rank_11_END (7)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_1_peri_vote_vol_rank_12_START (8)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_1_peri_vote_vol_rank_12_END (9)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_1_peri_vote_vol_rank_13_START (10)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_1_peri_vote_vol_rank_13_END (11)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_1_peri_vote_vol_rank_14_START (12)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_1_peri_vote_vol_rank_14_END (13)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_1_peri_vote_vol_rank_15_START (14)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_1_peri_vote_vol_rank_15_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_vol_rank_0 : 1;
        unsigned int peri_vote_vol_rank_1 : 1;
        unsigned int peri_vote_vol_rank_2 : 1;
        unsigned int peri_vote_vol_rank_3 : 1;
        unsigned int peri_vote_vol_rank_4 : 1;
        unsigned int peri_vote_vol_rank_5 : 1;
        unsigned int peri_vote_vol_rank_6 : 1;
        unsigned int peri_vote_vol_rank_7 : 1;
        unsigned int peri_vote_vol_rank_8 : 1;
        unsigned int peri_vote_vol_rank_9 : 1;
        unsigned int peri_vote_vol_rank_10 : 1;
        unsigned int peri_vote_vol_rank_11 : 1;
        unsigned int peri_vote_vol_rank_12 : 1;
        unsigned int peri_vote_vol_rank_13 : 1;
        unsigned int peri_vote_vol_rank_14 : 1;
        unsigned int peri_vote_vol_rank_15 : 1;
        unsigned int reserved : 16;
    } reg;
} SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_0_START (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_0_END (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_1_START (1)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_1_END (1)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_2_START (2)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_2_END (2)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_3_START (3)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_3_END (3)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_4_START (4)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_4_END (4)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_5_START (5)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_5_END (5)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_6_START (6)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_6_END (6)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_7_START (7)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_7_END (7)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_8_START (8)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_8_END (8)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_9_START (9)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_9_END (9)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_10_START (10)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_10_END (10)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_11_START (11)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_11_END (11)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_12_START (12)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_12_END (12)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_13_START (13)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_13_END (13)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_14_START (14)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_14_END (14)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_15_START (15)
#define SOC_PMCTRL_PERI_VOTE_VOL_RANK_SFT_2_peri_vote_vol_rank_15_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_vol_valid_0 : 1;
        unsigned int peri_vote_vol_valid_1 : 1;
        unsigned int peri_vote_vol_valid_2 : 1;
        unsigned int peri_vote_vol_valid_3 : 1;
        unsigned int peri_vote_vol_valid_4 : 1;
        unsigned int peri_vote_vol_valid_5 : 1;
        unsigned int peri_vote_vol_valid_6 : 1;
        unsigned int peri_vote_vol_valid_7 : 1;
        unsigned int peri_vote_vol_valid_8 : 1;
        unsigned int peri_vote_vol_valid_9 : 1;
        unsigned int peri_vote_vol_valid_10 : 1;
        unsigned int peri_vote_vol_valid_11 : 1;
        unsigned int peri_vote_vol_valid_12 : 1;
        unsigned int peri_vote_vol_valid_13 : 1;
        unsigned int peri_vote_vol_valid_14 : 1;
        unsigned int peri_vote_vol_valid_15 : 1;
        unsigned int reserved : 16;
    } reg;
} SOC_PMCTRL_PERI_VOTE_VOL_VALID_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_0_START (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_0_END (0)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_1_START (1)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_1_END (1)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_2_START (2)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_2_END (2)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_3_START (3)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_3_END (3)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_4_START (4)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_4_END (4)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_5_START (5)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_5_END (5)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_6_START (6)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_6_END (6)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_7_START (7)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_7_END (7)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_8_START (8)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_8_END (8)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_9_START (9)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_9_END (9)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_10_START (10)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_10_END (10)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_11_START (11)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_11_END (11)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_12_START (12)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_12_END (12)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_13_START (13)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_13_END (13)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_14_START (14)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_14_END (14)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_15_START (15)
#define SOC_PMCTRL_PERI_VOTE_VOL_VALID_peri_vote_vol_valid_15_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_sft_chg_0 : 1;
        unsigned int peri_vote_sft_chg_1 : 1;
        unsigned int peri_vote_sft_chg_2 : 1;
        unsigned int peri_vote_sft_chg_3 : 1;
        unsigned int peri_vote_sft_chg_4 : 1;
        unsigned int peri_vote_sft_chg_5 : 1;
        unsigned int peri_vote_sft_chg_6 : 1;
        unsigned int peri_vote_sft_chg_7 : 1;
        unsigned int peri_vote_sft_chg_8 : 1;
        unsigned int peri_vote_sft_chg_9 : 1;
        unsigned int peri_vote_sft_chg_10 : 1;
        unsigned int peri_vote_sft_chg_11 : 1;
        unsigned int peri_vote_sft_chg_12 : 1;
        unsigned int peri_vote_sft_chg_13 : 1;
        unsigned int peri_vote_sft_chg_14 : 1;
        unsigned int peri_vote_sft_chg_15 : 1;
        unsigned int peri_vote_sft_hrd_chg_0 : 1;
        unsigned int peri_vote_sft_hrd_chg_1 : 1;
        unsigned int peri_vote_sft_hrd_chg_2 : 1;
        unsigned int peri_vote_sft_hrd_chg_3 : 1;
        unsigned int reserved : 12;
    } reg;
} SOC_PMCTRL_PERI_VOTE_SFT_CHG_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_0_START (0)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_0_END (0)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_1_START (1)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_1_END (1)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_2_START (2)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_2_END (2)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_3_START (3)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_3_END (3)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_4_START (4)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_4_END (4)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_5_START (5)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_5_END (5)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_6_START (6)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_6_END (6)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_7_START (7)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_7_END (7)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_8_START (8)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_8_END (8)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_9_START (9)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_9_END (9)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_10_START (10)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_10_END (10)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_11_START (11)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_11_END (11)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_12_START (12)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_12_END (12)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_13_START (13)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_13_END (13)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_14_START (14)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_14_END (14)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_15_START (15)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_chg_15_END (15)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_hrd_chg_0_START (16)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_hrd_chg_0_END (16)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_hrd_chg_1_START (17)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_hrd_chg_1_END (17)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_hrd_chg_2_START (18)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_hrd_chg_2_END (18)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_hrd_chg_3_START (19)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_peri_vote_sft_hrd_chg_3_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_sft_chg_bypass_0 : 1;
        unsigned int peri_vote_sft_chg_bypass_1 : 1;
        unsigned int peri_vote_sft_chg_bypass_2 : 1;
        unsigned int peri_vote_sft_chg_bypass_3 : 1;
        unsigned int peri_vote_sft_chg_bypass_4 : 1;
        unsigned int peri_vote_sft_chg_bypass_5 : 1;
        unsigned int peri_vote_sft_chg_bypass_6 : 1;
        unsigned int peri_vote_sft_chg_bypass_7 : 1;
        unsigned int peri_vote_sft_chg_bypass_8 : 1;
        unsigned int peri_vote_sft_chg_bypass_9 : 1;
        unsigned int peri_vote_sft_chg_bypass_10 : 1;
        unsigned int peri_vote_sft_chg_bypass_11 : 1;
        unsigned int peri_vote_sft_chg_bypass_12 : 1;
        unsigned int peri_vote_sft_chg_bypass_13 : 1;
        unsigned int peri_vote_sft_chg_bypass_14 : 1;
        unsigned int peri_vote_sft_chg_bypass_15 : 1;
        unsigned int peri_vote_hrd_chg_bypass_0 : 1;
        unsigned int peri_vote_hrd_chg_bypass_1 : 1;
        unsigned int peri_vote_hrd_chg_bypass_2 : 1;
        unsigned int peri_vote_hrd_chg_bypass_3 : 1;
        unsigned int peri_vote_sft_hrd_chg_bypass_0 : 1;
        unsigned int peri_vote_sft_hrd_chg_bypass_1 : 1;
        unsigned int peri_vote_sft_hrd_chg_bypass_2 : 1;
        unsigned int peri_vote_sft_hrd_chg_bypass_3 : 1;
        unsigned int reserved : 8;
    } reg;
} SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_0_START (0)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_0_END (0)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_1_START (1)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_1_END (1)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_2_START (2)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_2_END (2)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_3_START (3)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_3_END (3)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_4_START (4)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_4_END (4)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_5_START (5)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_5_END (5)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_6_START (6)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_6_END (6)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_7_START (7)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_7_END (7)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_8_START (8)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_8_END (8)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_9_START (9)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_9_END (9)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_10_START (10)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_10_END (10)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_11_START (11)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_11_END (11)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_12_START (12)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_12_END (12)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_13_START (13)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_13_END (13)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_14_START (14)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_14_END (14)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_15_START (15)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_chg_bypass_15_END (15)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_hrd_chg_bypass_0_START (16)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_hrd_chg_bypass_0_END (16)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_hrd_chg_bypass_1_START (17)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_hrd_chg_bypass_1_END (17)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_hrd_chg_bypass_2_START (18)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_hrd_chg_bypass_2_END (18)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_hrd_chg_bypass_3_START (19)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_hrd_chg_bypass_3_END (19)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_hrd_chg_bypass_0_START (20)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_hrd_chg_bypass_0_END (20)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_hrd_chg_bypass_1_START (21)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_hrd_chg_bypass_1_END (21)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_hrd_chg_bypass_2_START (22)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_hrd_chg_bypass_2_END (22)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_hrd_chg_bypass_3_START (23)
#define SOC_PMCTRL_PERI_VOTE_SFT_CHG_BYPASS_peri_vote_sft_hrd_chg_bypass_3_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_pmu_up_hold_time : 20;
        unsigned int peri_pmu_up_step_time : 12;
    } reg;
} SOC_PMCTRL_PERI_PMU_TRIM_UP_TIME_UNION;
#endif
#define SOC_PMCTRL_PERI_PMU_TRIM_UP_TIME_peri_pmu_up_hold_time_START (0)
#define SOC_PMCTRL_PERI_PMU_TRIM_UP_TIME_peri_pmu_up_hold_time_END (19)
#define SOC_PMCTRL_PERI_PMU_TRIM_UP_TIME_peri_pmu_up_step_time_START (20)
#define SOC_PMCTRL_PERI_PMU_TRIM_UP_TIME_peri_pmu_up_step_time_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_pmu_dn_hold_time : 20;
        unsigned int peri_pmu_dn_step_time : 12;
    } reg;
} SOC_PMCTRL_PERI_PMU_TRIM_DN_TTME_UNION;
#endif
#define SOC_PMCTRL_PERI_PMU_TRIM_DN_TTME_peri_pmu_dn_hold_time_START (0)
#define SOC_PMCTRL_PERI_PMU_TRIM_DN_TTME_peri_pmu_dn_hold_time_END (19)
#define SOC_PMCTRL_PERI_PMU_TRIM_DN_TTME_peri_pmu_dn_step_time_START (20)
#define SOC_PMCTRL_PERI_PMU_TRIM_DN_TTME_peri_pmu_dn_step_time_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vol_sft_clr_0 : 1;
        unsigned int peri_vol_sft_clr_1 : 1;
        unsigned int peri_vol_sft_clr_2 : 1;
        unsigned int peri_vol_sft_clr_3 : 1;
        unsigned int peri_vol_sft_clr_4 : 1;
        unsigned int peri_vol_sft_clr_5 : 1;
        unsigned int peri_vol_sft_clr_6 : 1;
        unsigned int peri_vol_sft_clr_7 : 1;
        unsigned int peri_vol_sft_clr_8 : 1;
        unsigned int peri_vol_sft_clr_9 : 1;
        unsigned int peri_vol_sft_clr_10 : 1;
        unsigned int peri_vol_sft_clr_11 : 1;
        unsigned int peri_vol_sft_clr_12 : 1;
        unsigned int peri_vol_sft_clr_13 : 1;
        unsigned int peri_vol_sft_clr_14 : 1;
        unsigned int peri_vol_sft_clr_15 : 1;
        unsigned int peri_vol_sft_clr_hrd_0 : 1;
        unsigned int peri_vol_sft_clr_hrd_1 : 1;
        unsigned int peri_vol_sft_clr_hrd_2 : 1;
        unsigned int peri_vol_sft_clr_hrd_3 : 1;
        unsigned int reserved : 12;
    } reg;
} SOC_PMCTRL_PERI_VOL_SFT_CLR_UNION;
#endif
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_0_START (0)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_0_END (0)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_1_START (1)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_1_END (1)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_2_START (2)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_2_END (2)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_3_START (3)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_3_END (3)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_4_START (4)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_4_END (4)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_5_START (5)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_5_END (5)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_6_START (6)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_6_END (6)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_7_START (7)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_7_END (7)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_8_START (8)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_8_END (8)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_9_START (9)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_9_END (9)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_10_START (10)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_10_END (10)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_11_START (11)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_11_END (11)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_12_START (12)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_12_END (12)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_13_START (13)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_13_END (13)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_14_START (14)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_14_END (14)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_15_START (15)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_15_END (15)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_hrd_0_START (16)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_hrd_0_END (16)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_hrd_1_START (17)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_hrd_1_END (17)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_hrd_2_START (18)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_hrd_2_END (18)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_hrd_3_START (19)
#define SOC_PMCTRL_PERI_VOL_SFT_CLR_peri_vol_sft_clr_hrd_3_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vol_stable_0 : 1;
        unsigned int peri_vol_stable_1 : 1;
        unsigned int peri_vol_stable_2 : 1;
        unsigned int peri_vol_stable_3 : 1;
        unsigned int peri_vol_stable_4 : 1;
        unsigned int peri_vol_stable_5 : 1;
        unsigned int peri_vol_stable_6 : 1;
        unsigned int peri_vol_stable_7 : 1;
        unsigned int peri_vol_stable_8 : 1;
        unsigned int peri_vol_stable_9 : 1;
        unsigned int peri_vol_stable_10 : 1;
        unsigned int peri_vol_stable_11 : 1;
        unsigned int peri_vol_stable_12 : 1;
        unsigned int peri_vol_stable_13 : 1;
        unsigned int peri_vol_stable_14 : 1;
        unsigned int peri_vol_stable_15 : 1;
        unsigned int peri_vol_hrd_stable_0 : 1;
        unsigned int peri_vol_hrd_stable_1 : 1;
        unsigned int peri_vol_hrd_stable_2 : 1;
        unsigned int peri_vol_hrd_stable_3 : 1;
        unsigned int reserved : 12;
    } reg;
} SOC_PMCTRL_PERI_VOL_STABLE_UNION;
#endif
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_0_START (0)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_0_END (0)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_1_START (1)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_1_END (1)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_2_START (2)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_2_END (2)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_3_START (3)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_3_END (3)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_4_START (4)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_4_END (4)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_5_START (5)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_5_END (5)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_6_START (6)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_6_END (6)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_7_START (7)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_7_END (7)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_8_START (8)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_8_END (8)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_9_START (9)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_9_END (9)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_10_START (10)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_10_END (10)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_11_START (11)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_11_END (11)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_12_START (12)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_12_END (12)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_13_START (13)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_13_END (13)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_14_START (14)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_14_END (14)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_15_START (15)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_stable_15_END (15)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_hrd_stable_0_START (16)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_hrd_stable_0_END (16)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_hrd_stable_1_START (17)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_hrd_stable_1_END (17)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_hrd_stable_2_START (18)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_hrd_stable_2_END (18)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_hrd_stable_3_START (19)
#define SOC_PMCTRL_PERI_VOL_STABLE_peri_vol_hrd_stable_3_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_init_vol_idx : 8;
        unsigned int peri_init_vol_req : 1;
        unsigned int reserved : 23;
    } reg;
} SOC_PMCTRL_PERI_INIT_VOL_CONFIG_UNION;
#endif
#define SOC_PMCTRL_PERI_INIT_VOL_CONFIG_peri_init_vol_idx_START (0)
#define SOC_PMCTRL_PERI_INIT_VOL_CONFIG_peri_init_vol_idx_END (7)
#define SOC_PMCTRL_PERI_INIT_VOL_CONFIG_peri_init_vol_req_START (8)
#define SOC_PMCTRL_PERI_INIT_VOL_CONFIG_peri_init_vol_req_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_sft_fix_vol_idx : 8;
        unsigned int peri_sft_fix_vol : 1;
        unsigned int peri_sft_fix_vol_req : 1;
        unsigned int reserved : 22;
    } reg;
} SOC_PMCTRL_PERI_FIX_VOL_CONFIG_UNION;
#endif
#define SOC_PMCTRL_PERI_FIX_VOL_CONFIG_peri_sft_fix_vol_idx_START (0)
#define SOC_PMCTRL_PERI_FIX_VOL_CONFIG_peri_sft_fix_vol_idx_END (7)
#define SOC_PMCTRL_PERI_FIX_VOL_CONFIG_peri_sft_fix_vol_START (8)
#define SOC_PMCTRL_PERI_FIX_VOL_CONFIG_peri_sft_fix_vol_END (8)
#define SOC_PMCTRL_PERI_FIX_VOL_CONFIG_peri_sft_fix_vol_req_START (9)
#define SOC_PMCTRL_PERI_FIX_VOL_CONFIG_peri_sft_fix_vol_req_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_intr_m3orcpu_msk_0 : 1;
        unsigned int peri_intr_m3orcpu_msk_1 : 1;
        unsigned int peri_intr_m3orcpu_msk_2 : 1;
        unsigned int peri_intr_m3orcpu_msk_3 : 1;
        unsigned int peri_intr_m3orcpu_msk_4 : 1;
        unsigned int peri_intr_m3orcpu_msk_5 : 1;
        unsigned int peri_intr_m3orcpu_msk_6 : 1;
        unsigned int peri_intr_m3orcpu_msk_7 : 1;
        unsigned int peri_intr_m3orcpu_msk_8 : 1;
        unsigned int peri_intr_m3orcpu_msk_9 : 1;
        unsigned int peri_intr_m3orcpu_msk_10 : 1;
        unsigned int peri_intr_m3orcpu_msk_11 : 1;
        unsigned int peri_intr_m3orcpu_msk_12 : 1;
        unsigned int peri_intr_m3orcpu_msk_13 : 1;
        unsigned int peri_intr_m3orcpu_msk_14 : 1;
        unsigned int peri_intr_m3orcpu_msk_15 : 1;
        unsigned int peri_intr_m3orcpu_msk_16 : 1;
        unsigned int peri_intr_m3orcpu_msk_17 : 1;
        unsigned int peri_intr_m3orcpu_msk_18 : 1;
        unsigned int peri_intr_m3orcpu_msk_19 : 1;
        unsigned int reserved : 12;
    } reg;
} SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_UNION;
#endif
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_0_START (0)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_0_END (0)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_1_START (1)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_1_END (1)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_2_START (2)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_2_END (2)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_3_START (3)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_3_END (3)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_4_START (4)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_4_END (4)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_5_START (5)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_5_END (5)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_6_START (6)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_6_END (6)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_7_START (7)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_7_END (7)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_8_START (8)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_8_END (8)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_9_START (9)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_9_END (9)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_10_START (10)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_10_END (10)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_11_START (11)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_11_END (11)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_12_START (12)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_12_END (12)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_13_START (13)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_13_END (13)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_14_START (14)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_14_END (14)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_15_START (15)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_15_END (15)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_16_START (16)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_16_END (16)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_17_START (17)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_17_END (17)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_18_START (18)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_18_END (18)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_19_START (19)
#define SOC_PMCTRL_PERI_INTR_M3ORCPU_MSK_peri_intr_m3orcpu_msk_19_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_cur_max_vol : 8;
        unsigned int peri_nxt_max_vol : 8;
        unsigned int peri_cur_max_vol_hst_0 : 8;
        unsigned int peri_cur_max_vol_hst_1 : 8;
    } reg;
} SOC_PMCTRL_PERI_VOL_READ_UNION;
#endif
#define SOC_PMCTRL_PERI_VOL_READ_peri_cur_max_vol_START (0)
#define SOC_PMCTRL_PERI_VOL_READ_peri_cur_max_vol_END (7)
#define SOC_PMCTRL_PERI_VOL_READ_peri_nxt_max_vol_START (8)
#define SOC_PMCTRL_PERI_VOL_READ_peri_nxt_max_vol_END (15)
#define SOC_PMCTRL_PERI_VOL_READ_peri_cur_max_vol_hst_0_START (16)
#define SOC_PMCTRL_PERI_VOL_READ_peri_cur_max_vol_hst_0_END (23)
#define SOC_PMCTRL_PERI_VOL_READ_peri_cur_max_vol_hst_1_START (24)
#define SOC_PMCTRL_PERI_VOL_READ_peri_cur_max_vol_hst_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_pmu_vol_idx_spmi : 8;
        unsigned int peri_pmu_vol_chg_spmi : 1;
        unsigned int intr_peri_dvs_stat_pmc2lpm3 : 1;
        unsigned int intr_peri_dvs_stat_pmc2acpu : 1;
        unsigned int peri_vol_rank_pmc2dpm : 3;
        unsigned int peri_cur_vau_stat : 3;
        unsigned int peri_pmu_vol_ack_spmi : 1;
        unsigned int reserved : 14;
    } reg;
} SOC_PMCTRL_PERI_DVS_OUTPUT_READ_UNION;
#endif
#define SOC_PMCTRL_PERI_DVS_OUTPUT_READ_peri_pmu_vol_idx_spmi_START (0)
#define SOC_PMCTRL_PERI_DVS_OUTPUT_READ_peri_pmu_vol_idx_spmi_END (7)
#define SOC_PMCTRL_PERI_DVS_OUTPUT_READ_peri_pmu_vol_chg_spmi_START (8)
#define SOC_PMCTRL_PERI_DVS_OUTPUT_READ_peri_pmu_vol_chg_spmi_END (8)
#define SOC_PMCTRL_PERI_DVS_OUTPUT_READ_intr_peri_dvs_stat_pmc2lpm3_START (9)
#define SOC_PMCTRL_PERI_DVS_OUTPUT_READ_intr_peri_dvs_stat_pmc2lpm3_END (9)
#define SOC_PMCTRL_PERI_DVS_OUTPUT_READ_intr_peri_dvs_stat_pmc2acpu_START (10)
#define SOC_PMCTRL_PERI_DVS_OUTPUT_READ_intr_peri_dvs_stat_pmc2acpu_END (10)
#define SOC_PMCTRL_PERI_DVS_OUTPUT_READ_peri_vol_rank_pmc2dpm_START (11)
#define SOC_PMCTRL_PERI_DVS_OUTPUT_READ_peri_vol_rank_pmc2dpm_END (13)
#define SOC_PMCTRL_PERI_DVS_OUTPUT_READ_peri_cur_vau_stat_START (14)
#define SOC_PMCTRL_PERI_DVS_OUTPUT_READ_peri_cur_vau_stat_END (16)
#define SOC_PMCTRL_PERI_DVS_OUTPUT_READ_peri_pmu_vol_ack_spmi_START (17)
#define SOC_PMCTRL_PERI_DVS_OUTPUT_READ_peri_pmu_vol_ack_spmi_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vol_rank_idx_0 : 8;
        unsigned int peri_vol_rank_idx_1 : 8;
        unsigned int peri_vol_rank_idx_2 : 8;
        unsigned int peri_vol_rank_idx_3 : 8;
    } reg;
} SOC_PMCTRL_PERI_VOL_RANK_IDX_0_UNION;
#endif
#define SOC_PMCTRL_PERI_VOL_RANK_IDX_0_peri_vol_rank_idx_0_START (0)
#define SOC_PMCTRL_PERI_VOL_RANK_IDX_0_peri_vol_rank_idx_0_END (7)
#define SOC_PMCTRL_PERI_VOL_RANK_IDX_0_peri_vol_rank_idx_1_START (8)
#define SOC_PMCTRL_PERI_VOL_RANK_IDX_0_peri_vol_rank_idx_1_END (15)
#define SOC_PMCTRL_PERI_VOL_RANK_IDX_0_peri_vol_rank_idx_2_START (16)
#define SOC_PMCTRL_PERI_VOL_RANK_IDX_0_peri_vol_rank_idx_2_END (23)
#define SOC_PMCTRL_PERI_VOL_RANK_IDX_0_peri_vol_rank_idx_3_START (24)
#define SOC_PMCTRL_PERI_VOL_RANK_IDX_0_peri_vol_rank_idx_3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vol_rank_idx_4 : 8;
        unsigned int peri_vol_rank_idx_5 : 8;
        unsigned int peri_vol_rank_idx_6 : 8;
        unsigned int reserved : 8;
    } reg;
} SOC_PMCTRL_PERI_VOL_RANK_IDX_1_UNION;
#endif
#define SOC_PMCTRL_PERI_VOL_RANK_IDX_1_peri_vol_rank_idx_4_START (0)
#define SOC_PMCTRL_PERI_VOL_RANK_IDX_1_peri_vol_rank_idx_4_END (7)
#define SOC_PMCTRL_PERI_VOL_RANK_IDX_1_peri_vol_rank_idx_5_START (8)
#define SOC_PMCTRL_PERI_VOL_RANK_IDX_1_peri_vol_rank_idx_5_END (15)
#define SOC_PMCTRL_PERI_VOL_RANK_IDX_1_peri_vol_rank_idx_6_START (16)
#define SOC_PMCTRL_PERI_VOL_RANK_IDX_1_peri_vol_rank_idx_6_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vote_sft_hrd_vol_idx_0 : 8;
        unsigned int peri_vote_sft_hrd_vol_idx_1 : 8;
        unsigned int peri_vote_sft_hrd_vol_idx_2 : 8;
        unsigned int peri_vote_sft_hrd_vol_idx_3 : 8;
    } reg;
} SOC_PMCTRL_PERI_VOTE_SFT_HRD_VOL_IDX_UNION;
#endif
#define SOC_PMCTRL_PERI_VOTE_SFT_HRD_VOL_IDX_peri_vote_sft_hrd_vol_idx_0_START (0)
#define SOC_PMCTRL_PERI_VOTE_SFT_HRD_VOL_IDX_peri_vote_sft_hrd_vol_idx_0_END (7)
#define SOC_PMCTRL_PERI_VOTE_SFT_HRD_VOL_IDX_peri_vote_sft_hrd_vol_idx_1_START (8)
#define SOC_PMCTRL_PERI_VOTE_SFT_HRD_VOL_IDX_peri_vote_sft_hrd_vol_idx_1_END (15)
#define SOC_PMCTRL_PERI_VOTE_SFT_HRD_VOL_IDX_peri_vote_sft_hrd_vol_idx_2_START (16)
#define SOC_PMCTRL_PERI_VOTE_SFT_HRD_VOL_IDX_peri_vote_sft_hrd_vol_idx_2_END (23)
#define SOC_PMCTRL_PERI_VOTE_SFT_HRD_VOL_IDX_peri_vote_sft_hrd_vol_idx_3_START (24)
#define SOC_PMCTRL_PERI_VOTE_SFT_HRD_VOL_IDX_peri_vote_sft_hrd_vol_idx_3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_stat_time_hold : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_PMCTRL_PERI_STAT_TIME_HOLD_UNION;
#endif
#define SOC_PMCTRL_PERI_STAT_TIME_HOLD_peri_stat_time_hold_START (0)
#define SOC_PMCTRL_PERI_STAT_TIME_HOLD_peri_stat_time_hold_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_intr_bypass_0 : 1;
        unsigned int peri_intr_bypass_1 : 1;
        unsigned int peri_intr_bypass_2 : 1;
        unsigned int peri_intr_bypass_3 : 1;
        unsigned int peri_intr_bypass_4 : 1;
        unsigned int peri_intr_bypass_5 : 1;
        unsigned int peri_intr_bypass_6 : 1;
        unsigned int peri_intr_bypass_7 : 1;
        unsigned int peri_intr_bypass_8 : 1;
        unsigned int peri_intr_bypass_9 : 1;
        unsigned int peri_intr_bypass_10 : 1;
        unsigned int peri_intr_bypass_11 : 1;
        unsigned int peri_intr_bypass_12 : 1;
        unsigned int peri_intr_bypass_13 : 1;
        unsigned int peri_intr_bypass_14 : 1;
        unsigned int peri_intr_bypass_15 : 1;
        unsigned int reserved : 16;
    } reg;
} SOC_PMCTRL_PERI_INTR_BYPASS_SFT_UNION;
#endif
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_0_START (0)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_0_END (0)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_1_START (1)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_1_END (1)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_2_START (2)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_2_END (2)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_3_START (3)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_3_END (3)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_4_START (4)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_4_END (4)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_5_START (5)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_5_END (5)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_6_START (6)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_6_END (6)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_7_START (7)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_7_END (7)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_8_START (8)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_8_END (8)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_9_START (9)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_9_END (9)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_10_START (10)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_10_END (10)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_11_START (11)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_11_END (11)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_12_START (12)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_12_END (12)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_13_START (13)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_13_END (13)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_14_START (14)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_14_END (14)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_15_START (15)
#define SOC_PMCTRL_PERI_INTR_BYPASS_SFT_peri_intr_bypass_15_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_intr_bypass_16 : 1;
        unsigned int peri_intr_bypass_17 : 1;
        unsigned int peri_intr_bypass_18 : 1;
        unsigned int peri_intr_bypass_19 : 1;
        unsigned int peri_vol_rank_sftorhrd : 1;
        unsigned int peri_vol_rank_pmc2dpm_sft : 3;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 16;
    } reg;
} SOC_PMCTRL_PERI_INTR_BYPASS_HRD_UNION;
#endif
#define SOC_PMCTRL_PERI_INTR_BYPASS_HRD_peri_intr_bypass_16_START (0)
#define SOC_PMCTRL_PERI_INTR_BYPASS_HRD_peri_intr_bypass_16_END (0)
#define SOC_PMCTRL_PERI_INTR_BYPASS_HRD_peri_intr_bypass_17_START (1)
#define SOC_PMCTRL_PERI_INTR_BYPASS_HRD_peri_intr_bypass_17_END (1)
#define SOC_PMCTRL_PERI_INTR_BYPASS_HRD_peri_intr_bypass_18_START (2)
#define SOC_PMCTRL_PERI_INTR_BYPASS_HRD_peri_intr_bypass_18_END (2)
#define SOC_PMCTRL_PERI_INTR_BYPASS_HRD_peri_intr_bypass_19_START (3)
#define SOC_PMCTRL_PERI_INTR_BYPASS_HRD_peri_intr_bypass_19_END (3)
#define SOC_PMCTRL_PERI_INTR_BYPASS_HRD_peri_vol_rank_sftorhrd_START (4)
#define SOC_PMCTRL_PERI_INTR_BYPASS_HRD_peri_vol_rank_sftorhrd_END (4)
#define SOC_PMCTRL_PERI_INTR_BYPASS_HRD_peri_vol_rank_pmc2dpm_sft_START (5)
#define SOC_PMCTRL_PERI_INTR_BYPASS_HRD_peri_vol_rank_pmc2dpm_sft_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_vol_chg_flag : 21;
        unsigned int reserved_0 : 3;
        unsigned int reserved_1 : 8;
    } reg;
} SOC_PMCTRL_PERI_VOL_CHG_FLAG_UNION;
#endif
#define SOC_PMCTRL_PERI_VOL_CHG_FLAG_peri_vol_chg_flag_START (0)
#define SOC_PMCTRL_PERI_VOL_CHG_FLAG_peri_vol_chg_flag_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_valid_hrd_vol_idx_0 : 8;
        unsigned int peri_valid_hrd_vol_idx_1 : 8;
        unsigned int peri_valid_hrd_vol_idx_2 : 8;
        unsigned int peri_valid_hrd_vol_idx_3 : 8;
    } reg;
} SOC_PMCTRL_PERI_VALID_HRD_VOL_IDX_UNION;
#endif
#define SOC_PMCTRL_PERI_VALID_HRD_VOL_IDX_peri_valid_hrd_vol_idx_0_START (0)
#define SOC_PMCTRL_PERI_VALID_HRD_VOL_IDX_peri_valid_hrd_vol_idx_0_END (7)
#define SOC_PMCTRL_PERI_VALID_HRD_VOL_IDX_peri_valid_hrd_vol_idx_1_START (8)
#define SOC_PMCTRL_PERI_VALID_HRD_VOL_IDX_peri_valid_hrd_vol_idx_1_END (15)
#define SOC_PMCTRL_PERI_VALID_HRD_VOL_IDX_peri_valid_hrd_vol_idx_2_START (16)
#define SOC_PMCTRL_PERI_VALID_HRD_VOL_IDX_peri_valid_hrd_vol_idx_2_END (23)
#define SOC_PMCTRL_PERI_VALID_HRD_VOL_IDX_peri_valid_hrd_vol_idx_3_START (24)
#define SOC_PMCTRL_PERI_VALID_HRD_VOL_IDX_peri_valid_hrd_vol_idx_3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_spmi_hold_time : 20;
        unsigned int peri_spmi_timeout_bypass : 1;
        unsigned int reserved : 11;
    } reg;
} SOC_PMCTRL_PERI_SPMI_HOLD_TIME_UNION;
#endif
#define SOC_PMCTRL_PERI_SPMI_HOLD_TIME_peri_spmi_hold_time_START (0)
#define SOC_PMCTRL_PERI_SPMI_HOLD_TIME_peri_spmi_hold_time_END (19)
#define SOC_PMCTRL_PERI_SPMI_HOLD_TIME_peri_spmi_timeout_bypass_START (20)
#define SOC_PMCTRL_PERI_SPMI_HOLD_TIME_peri_spmi_timeout_bypass_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int buck5_vote_sft_vol_idx_0 : 8;
        unsigned int buck5_sft_vol_vote_en_0 : 1;
        unsigned int buck5_vote_sft_chg_0 : 1;
        unsigned int reserved_0 : 2;
        unsigned int buck5_vote_sft_chg_bypass_0 : 1;
        unsigned int reserved_1 : 3;
        unsigned int buck5_vote_hrd_chg_bypass_0 : 1;
        unsigned int reserved_2 : 3;
        unsigned int buck5_valid_vol_idx_0 : 8;
        unsigned int buck5_vol_stable_0 : 1;
        unsigned int buck5_vol_sft_clr_0 : 1;
        unsigned int reserved_3 : 2;
    } reg;
} SOC_PMCTRL_BUCK5_VOL_CTRL_0_UNION;
#endif
#define SOC_PMCTRL_BUCK5_VOL_CTRL_0_buck5_vote_sft_vol_idx_0_START (0)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_0_buck5_vote_sft_vol_idx_0_END (7)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_0_buck5_sft_vol_vote_en_0_START (8)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_0_buck5_sft_vol_vote_en_0_END (8)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_0_buck5_vote_sft_chg_0_START (9)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_0_buck5_vote_sft_chg_0_END (9)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_0_buck5_vote_sft_chg_bypass_0_START (12)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_0_buck5_vote_sft_chg_bypass_0_END (12)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_0_buck5_vote_hrd_chg_bypass_0_START (16)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_0_buck5_vote_hrd_chg_bypass_0_END (16)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_0_buck5_valid_vol_idx_0_START (20)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_0_buck5_valid_vol_idx_0_END (27)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_0_buck5_vol_stable_0_START (28)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_0_buck5_vol_stable_0_END (28)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_0_buck5_vol_sft_clr_0_START (29)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_0_buck5_vol_sft_clr_0_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int buck5_vote_sft_vol_idx_1 : 8;
        unsigned int buck5_sft_vol_vote_en_1 : 1;
        unsigned int buck5_vote_sft_chg_1 : 1;
        unsigned int reserved_0 : 2;
        unsigned int buck5_vote_sft_chg_bypass_1 : 1;
        unsigned int reserved_1 : 3;
        unsigned int buck5_vote_hrd_chg_bypass_1 : 1;
        unsigned int reserved_2 : 3;
        unsigned int buck5_valid_vol_idx_1 : 8;
        unsigned int buck5_vol_stable_1 : 1;
        unsigned int buck5_vol_sft_clr_1 : 1;
        unsigned int reserved_3 : 2;
    } reg;
} SOC_PMCTRL_BUCK5_VOL_CTRL_1_UNION;
#endif
#define SOC_PMCTRL_BUCK5_VOL_CTRL_1_buck5_vote_sft_vol_idx_1_START (0)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_1_buck5_vote_sft_vol_idx_1_END (7)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_1_buck5_sft_vol_vote_en_1_START (8)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_1_buck5_sft_vol_vote_en_1_END (8)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_1_buck5_vote_sft_chg_1_START (9)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_1_buck5_vote_sft_chg_1_END (9)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_1_buck5_vote_sft_chg_bypass_1_START (12)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_1_buck5_vote_sft_chg_bypass_1_END (12)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_1_buck5_vote_hrd_chg_bypass_1_START (16)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_1_buck5_vote_hrd_chg_bypass_1_END (16)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_1_buck5_valid_vol_idx_1_START (20)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_1_buck5_valid_vol_idx_1_END (27)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_1_buck5_vol_stable_1_START (28)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_1_buck5_vol_stable_1_END (28)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_1_buck5_vol_sft_clr_1_START (29)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_1_buck5_vol_sft_clr_1_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int buck5_vote_sft_vol_idx_2 : 8;
        unsigned int buck5_sft_vol_vote_en_2 : 1;
        unsigned int buck5_vote_sft_chg_2 : 1;
        unsigned int reserved_0 : 2;
        unsigned int buck5_vote_sft_chg_bypass_2 : 1;
        unsigned int reserved_1 : 3;
        unsigned int buck5_vote_hrd_chg_bypass_2 : 1;
        unsigned int reserved_2 : 3;
        unsigned int buck5_valid_vol_idx_2 : 8;
        unsigned int buck5_vol_stable_2 : 1;
        unsigned int buck5_vol_sft_clr_2 : 1;
        unsigned int reserved_3 : 2;
    } reg;
} SOC_PMCTRL_BUCK5_VOL_CTRL_2_UNION;
#endif
#define SOC_PMCTRL_BUCK5_VOL_CTRL_2_buck5_vote_sft_vol_idx_2_START (0)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_2_buck5_vote_sft_vol_idx_2_END (7)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_2_buck5_sft_vol_vote_en_2_START (8)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_2_buck5_sft_vol_vote_en_2_END (8)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_2_buck5_vote_sft_chg_2_START (9)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_2_buck5_vote_sft_chg_2_END (9)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_2_buck5_vote_sft_chg_bypass_2_START (12)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_2_buck5_vote_sft_chg_bypass_2_END (12)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_2_buck5_vote_hrd_chg_bypass_2_START (16)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_2_buck5_vote_hrd_chg_bypass_2_END (16)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_2_buck5_valid_vol_idx_2_START (20)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_2_buck5_valid_vol_idx_2_END (27)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_2_buck5_vol_stable_2_START (28)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_2_buck5_vol_stable_2_END (28)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_2_buck5_vol_sft_clr_2_START (29)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_2_buck5_vol_sft_clr_2_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int buck5_vote_sft_vol_idx_3 : 8;
        unsigned int buck5_sft_vol_vote_en_3 : 1;
        unsigned int buck5_vote_sft_chg_3 : 1;
        unsigned int reserved_0 : 2;
        unsigned int buck5_vote_sft_chg_bypass_3 : 1;
        unsigned int reserved_1 : 3;
        unsigned int buck5_vote_hrd_chg_bypass_3 : 1;
        unsigned int reserved_2 : 3;
        unsigned int buck5_valid_vol_idx_3 : 8;
        unsigned int buck5_vol_stable_3 : 1;
        unsigned int buck5_vol_sft_clr_3 : 1;
        unsigned int reserved_3 : 2;
    } reg;
} SOC_PMCTRL_BUCK5_VOL_CTRL_3_UNION;
#endif
#define SOC_PMCTRL_BUCK5_VOL_CTRL_3_buck5_vote_sft_vol_idx_3_START (0)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_3_buck5_vote_sft_vol_idx_3_END (7)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_3_buck5_sft_vol_vote_en_3_START (8)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_3_buck5_sft_vol_vote_en_3_END (8)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_3_buck5_vote_sft_chg_3_START (9)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_3_buck5_vote_sft_chg_3_END (9)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_3_buck5_vote_sft_chg_bypass_3_START (12)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_3_buck5_vote_sft_chg_bypass_3_END (12)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_3_buck5_vote_hrd_chg_bypass_3_START (16)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_3_buck5_vote_hrd_chg_bypass_3_END (16)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_3_buck5_valid_vol_idx_3_START (20)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_3_buck5_valid_vol_idx_3_END (27)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_3_buck5_vol_stable_3_START (28)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_3_buck5_vol_stable_3_END (28)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_3_buck5_vol_sft_clr_3_START (29)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_3_buck5_vol_sft_clr_3_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int buck5_vote_sft_vol_idx_4 : 8;
        unsigned int buck5_sft_vol_vote_en_4 : 1;
        unsigned int buck5_vote_sft_chg_4 : 1;
        unsigned int reserved_0 : 2;
        unsigned int buck5_vote_sft_chg_bypass_4 : 1;
        unsigned int reserved_1 : 3;
        unsigned int buck5_vote_hrd_chg_bypass_4 : 1;
        unsigned int reserved_2 : 3;
        unsigned int buck5_valid_vol_idx_4 : 8;
        unsigned int buck5_vol_stable_4 : 1;
        unsigned int buck5_vol_sft_clr_4 : 1;
        unsigned int reserved_3 : 2;
    } reg;
} SOC_PMCTRL_BUCK5_VOL_CTRL_4_UNION;
#endif
#define SOC_PMCTRL_BUCK5_VOL_CTRL_4_buck5_vote_sft_vol_idx_4_START (0)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_4_buck5_vote_sft_vol_idx_4_END (7)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_4_buck5_sft_vol_vote_en_4_START (8)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_4_buck5_sft_vol_vote_en_4_END (8)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_4_buck5_vote_sft_chg_4_START (9)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_4_buck5_vote_sft_chg_4_END (9)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_4_buck5_vote_sft_chg_bypass_4_START (12)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_4_buck5_vote_sft_chg_bypass_4_END (12)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_4_buck5_vote_hrd_chg_bypass_4_START (16)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_4_buck5_vote_hrd_chg_bypass_4_END (16)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_4_buck5_valid_vol_idx_4_START (20)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_4_buck5_valid_vol_idx_4_END (27)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_4_buck5_vol_stable_4_START (28)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_4_buck5_vol_stable_4_END (28)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_4_buck5_vol_sft_clr_4_START (29)
#define SOC_PMCTRL_BUCK5_VOL_CTRL_4_buck5_vol_sft_clr_4_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int buck5_pmu_up_hold_time : 20;
        unsigned int buck5_pmu_up_step_time : 12;
    } reg;
} SOC_PMCTRL_BUCK5_PMU_TRIM_UP_TIME_UNION;
#endif
#define SOC_PMCTRL_BUCK5_PMU_TRIM_UP_TIME_buck5_pmu_up_hold_time_START (0)
#define SOC_PMCTRL_BUCK5_PMU_TRIM_UP_TIME_buck5_pmu_up_hold_time_END (19)
#define SOC_PMCTRL_BUCK5_PMU_TRIM_UP_TIME_buck5_pmu_up_step_time_START (20)
#define SOC_PMCTRL_BUCK5_PMU_TRIM_UP_TIME_buck5_pmu_up_step_time_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int buck5_pmu_dn_hold_time : 20;
        unsigned int buck5_pmu_dn_step_time : 12;
    } reg;
} SOC_PMCTRL_BUCK5_PMU_TRIM_DN_TIME_UNION;
#endif
#define SOC_PMCTRL_BUCK5_PMU_TRIM_DN_TIME_buck5_pmu_dn_hold_time_START (0)
#define SOC_PMCTRL_BUCK5_PMU_TRIM_DN_TIME_buck5_pmu_dn_hold_time_END (19)
#define SOC_PMCTRL_BUCK5_PMU_TRIM_DN_TIME_buck5_pmu_dn_step_time_START (20)
#define SOC_PMCTRL_BUCK5_PMU_TRIM_DN_TIME_buck5_pmu_dn_step_time_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int buck5_sft_fix_vol_idx : 8;
        unsigned int buck5_sft_fix_vol : 1;
        unsigned int buck5_sft_fix_vol_req : 1;
        unsigned int reserved_0 : 2;
        unsigned int buck5_init_vol_idx : 8;
        unsigned int buck5_init_vol_req : 1;
        unsigned int reserved_1 : 11;
    } reg;
} SOC_PMCTRL_BUCK5_VOL_CONFIG_UNION;
#endif
#define SOC_PMCTRL_BUCK5_VOL_CONFIG_buck5_sft_fix_vol_idx_START (0)
#define SOC_PMCTRL_BUCK5_VOL_CONFIG_buck5_sft_fix_vol_idx_END (7)
#define SOC_PMCTRL_BUCK5_VOL_CONFIG_buck5_sft_fix_vol_START (8)
#define SOC_PMCTRL_BUCK5_VOL_CONFIG_buck5_sft_fix_vol_END (8)
#define SOC_PMCTRL_BUCK5_VOL_CONFIG_buck5_sft_fix_vol_req_START (9)
#define SOC_PMCTRL_BUCK5_VOL_CONFIG_buck5_sft_fix_vol_req_END (9)
#define SOC_PMCTRL_BUCK5_VOL_CONFIG_buck5_init_vol_idx_START (12)
#define SOC_PMCTRL_BUCK5_VOL_CONFIG_buck5_init_vol_idx_END (19)
#define SOC_PMCTRL_BUCK5_VOL_CONFIG_buck5_init_vol_req_START (20)
#define SOC_PMCTRL_BUCK5_VOL_CONFIG_buck5_init_vol_req_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int buck5_cur_max_vol : 8;
        unsigned int buck5_nxt_max_vol : 8;
        unsigned int buck5_cur_max_vol_hst_0 : 8;
        unsigned int buck5_cur_max_vol_hst_1 : 8;
    } reg;
} SOC_PMCTRL_BUCK5_VOL_READ_UNION;
#endif
#define SOC_PMCTRL_BUCK5_VOL_READ_buck5_cur_max_vol_START (0)
#define SOC_PMCTRL_BUCK5_VOL_READ_buck5_cur_max_vol_END (7)
#define SOC_PMCTRL_BUCK5_VOL_READ_buck5_nxt_max_vol_START (8)
#define SOC_PMCTRL_BUCK5_VOL_READ_buck5_nxt_max_vol_END (15)
#define SOC_PMCTRL_BUCK5_VOL_READ_buck5_cur_max_vol_hst_0_START (16)
#define SOC_PMCTRL_BUCK5_VOL_READ_buck5_cur_max_vol_hst_0_END (23)
#define SOC_PMCTRL_BUCK5_VOL_READ_buck5_cur_max_vol_hst_1_START (24)
#define SOC_PMCTRL_BUCK5_VOL_READ_buck5_cur_max_vol_hst_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int buck5_pmu_vol_idx_spmi : 8;
        unsigned int buck5_pmu_vol_chg_spmi : 1;
        unsigned int buck5_pmu_vol_ack_spmi : 1;
        unsigned int reserved_0 : 2;
        unsigned int buck5_cur_vau_stat : 3;
        unsigned int reserved_1 : 17;
    } reg;
} SOC_PMCTRL_BUCK5_DVS_OUTPUT_READ_UNION;
#endif
#define SOC_PMCTRL_BUCK5_DVS_OUTPUT_READ_buck5_pmu_vol_idx_spmi_START (0)
#define SOC_PMCTRL_BUCK5_DVS_OUTPUT_READ_buck5_pmu_vol_idx_spmi_END (7)
#define SOC_PMCTRL_BUCK5_DVS_OUTPUT_READ_buck5_pmu_vol_chg_spmi_START (8)
#define SOC_PMCTRL_BUCK5_DVS_OUTPUT_READ_buck5_pmu_vol_chg_spmi_END (8)
#define SOC_PMCTRL_BUCK5_DVS_OUTPUT_READ_buck5_pmu_vol_ack_spmi_START (9)
#define SOC_PMCTRL_BUCK5_DVS_OUTPUT_READ_buck5_pmu_vol_ack_spmi_END (9)
#define SOC_PMCTRL_BUCK5_DVS_OUTPUT_READ_buck5_cur_vau_stat_START (12)
#define SOC_PMCTRL_BUCK5_DVS_OUTPUT_READ_buck5_cur_vau_stat_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int buck5_spmi_hold_time : 20;
        unsigned int buck5_spmi_timeout_bypass : 1;
        unsigned int reserved : 11;
    } reg;
} SOC_PMCTRL_BUCK5_SPMI_HOLD_TIME_UNION;
#endif
#define SOC_PMCTRL_BUCK5_SPMI_HOLD_TIME_buck5_spmi_hold_time_START (0)
#define SOC_PMCTRL_BUCK5_SPMI_HOLD_TIME_buck5_spmi_hold_time_END (19)
#define SOC_PMCTRL_BUCK5_SPMI_HOLD_TIME_buck5_spmi_timeout_bypass_START (20)
#define SOC_PMCTRL_BUCK5_SPMI_HOLD_TIME_buck5_spmi_timeout_bypass_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int apb_sw : 4;
        unsigned int apb_sw_init : 1;
        unsigned int reserved : 27;
    } reg;
} SOC_PMCTRL_HW_DSS_DVFS_APB_SW_CFG_UNION;
#endif
#define SOC_PMCTRL_HW_DSS_DVFS_APB_SW_CFG_apb_sw_START (0)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_SW_CFG_apb_sw_END (3)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_SW_CFG_apb_sw_init_START (4)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_SW_CFG_apb_sw_init_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int apb_div : 6;
        unsigned int apb_div_init : 1;
        unsigned int reserved : 25;
    } reg;
} SOC_PMCTRL_HW_DSS_DVFS_APB_DIV_CFG_UNION;
#endif
#define SOC_PMCTRL_HW_DSS_DVFS_APB_DIV_CFG_apb_div_START (0)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_DIV_CFG_apb_div_END (5)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_DIV_CFG_apb_div_init_START (6)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_DIV_CFG_apb_div_init_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int apb_pll_en0 : 1;
        unsigned int apb_pll_en1 : 1;
        unsigned int apb_pll_en2 : 1;
        unsigned int apb_pll_en3 : 1;
        unsigned int apb_pll_gt0 : 1;
        unsigned int apb_pll_gt1 : 1;
        unsigned int apb_pll_gt2 : 1;
        unsigned int apb_pll_gt3 : 1;
        unsigned int reserved_0 : 8;
        unsigned int reserved_1 : 16;
    } reg;
} SOC_PMCTRL_APB_DSS_DVFS_PLL_CFG_UNION;
#endif
#define SOC_PMCTRL_APB_DSS_DVFS_PLL_CFG_apb_pll_en0_START (0)
#define SOC_PMCTRL_APB_DSS_DVFS_PLL_CFG_apb_pll_en0_END (0)
#define SOC_PMCTRL_APB_DSS_DVFS_PLL_CFG_apb_pll_en1_START (1)
#define SOC_PMCTRL_APB_DSS_DVFS_PLL_CFG_apb_pll_en1_END (1)
#define SOC_PMCTRL_APB_DSS_DVFS_PLL_CFG_apb_pll_en2_START (2)
#define SOC_PMCTRL_APB_DSS_DVFS_PLL_CFG_apb_pll_en2_END (2)
#define SOC_PMCTRL_APB_DSS_DVFS_PLL_CFG_apb_pll_en3_START (3)
#define SOC_PMCTRL_APB_DSS_DVFS_PLL_CFG_apb_pll_en3_END (3)
#define SOC_PMCTRL_APB_DSS_DVFS_PLL_CFG_apb_pll_gt0_START (4)
#define SOC_PMCTRL_APB_DSS_DVFS_PLL_CFG_apb_pll_gt0_END (4)
#define SOC_PMCTRL_APB_DSS_DVFS_PLL_CFG_apb_pll_gt1_START (5)
#define SOC_PMCTRL_APB_DSS_DVFS_PLL_CFG_apb_pll_gt1_END (5)
#define SOC_PMCTRL_APB_DSS_DVFS_PLL_CFG_apb_pll_gt2_START (6)
#define SOC_PMCTRL_APB_DSS_DVFS_PLL_CFG_apb_pll_gt2_END (6)
#define SOC_PMCTRL_APB_DSS_DVFS_PLL_CFG_apb_pll_gt3_START (7)
#define SOC_PMCTRL_APB_DSS_DVFS_PLL_CFG_apb_pll_gt3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int apb_vol_idx : 8;
        unsigned int apb_vol_init : 1;
        unsigned int reserved : 23;
    } reg;
} SOC_PMCTRL_HW_DSS_DVFS_APB_VOL_CFG_UNION;
#endif
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VOL_CFG_apb_vol_idx_START (0)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VOL_CFG_apb_vol_idx_END (7)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VOL_CFG_apb_vol_init_START (8)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VOL_CFG_apb_vol_init_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int apb_vol_chg_init_pulse : 1;
        unsigned int apb_div_chg_init_pulse : 1;
        unsigned int apb_sw_chg_init_pulse : 1;
        unsigned int apb_pll_en3_init : 1;
        unsigned int apb_pll_en2_init : 1;
        unsigned int apb_pll_en1_init : 1;
        unsigned int apb_pll_en0_init : 1;
        unsigned int apb_pll_gt3_init : 1;
        unsigned int apb_pll_gt2_init : 1;
        unsigned int apb_pll_gt1_init : 1;
        unsigned int apb_pll_gt0_init : 1;
        unsigned int reserved : 21;
    } reg;
} SOC_PMCTRL_HW_DSS_DVFS_APB_VF_CFG_UNION;
#endif
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VF_CFG_apb_vol_chg_init_pulse_START (0)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VF_CFG_apb_vol_chg_init_pulse_END (0)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VF_CFG_apb_div_chg_init_pulse_START (1)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VF_CFG_apb_div_chg_init_pulse_END (1)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VF_CFG_apb_sw_chg_init_pulse_START (2)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VF_CFG_apb_sw_chg_init_pulse_END (2)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VF_CFG_apb_pll_en3_init_START (3)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VF_CFG_apb_pll_en3_init_END (3)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VF_CFG_apb_pll_en2_init_START (4)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VF_CFG_apb_pll_en2_init_END (4)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VF_CFG_apb_pll_en1_init_START (5)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VF_CFG_apb_pll_en1_init_END (5)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VF_CFG_apb_pll_en0_init_START (6)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VF_CFG_apb_pll_en0_init_END (6)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VF_CFG_apb_pll_gt3_init_START (7)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VF_CFG_apb_pll_gt3_init_END (7)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VF_CFG_apb_pll_gt2_init_START (8)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VF_CFG_apb_pll_gt2_init_END (8)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VF_CFG_apb_pll_gt1_init_START (9)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VF_CFG_apb_pll_gt1_init_END (9)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VF_CFG_apb_pll_gt0_init_START (10)
#define SOC_PMCTRL_HW_DSS_DVFS_APB_VF_CFG_apb_pll_gt0_init_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int reserved : 32;
    } reg;
} SOC_PMCTRL_APB_SF_INSTR_LIST_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int reserved : 32;
    } reg;
} SOC_PMCTRL_APB_HW_INSTR_LIST_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int apb_pclk_cnt_us : 10;
        unsigned int apb_vol_stable_cnt : 4;
        unsigned int apb_sw_stable_cnt : 4;
        unsigned int apb_sw_ack_cnt : 8;
        unsigned int apb_div_stable_cnt : 4;
        unsigned int reserved : 2;
    } reg;
} SOC_PMCTRL_DSS_DVFS_CNT_CFG1_UNION;
#endif
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG1_apb_pclk_cnt_us_START (0)
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG1_apb_pclk_cnt_us_END (9)
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG1_apb_vol_stable_cnt_START (10)
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG1_apb_vol_stable_cnt_END (13)
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG1_apb_sw_stable_cnt_START (14)
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG1_apb_sw_stable_cnt_END (17)
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG1_apb_sw_ack_cnt_START (18)
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG1_apb_sw_ack_cnt_END (25)
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG1_apb_div_stable_cnt_START (26)
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG1_apb_div_stable_cnt_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int apb_div_ack_cnt : 8;
        unsigned int apb_pll_lock_mode : 1;
        unsigned int apb_lock_time : 13;
        unsigned int apb_pll_gt_stable_cnt : 4;
        unsigned int reserved_0 : 4;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_PMCTRL_DSS_DVFS_CNT_CFG2_UNION;
#endif
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG2_apb_div_ack_cnt_START (0)
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG2_apb_div_ack_cnt_END (7)
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG2_apb_pll_lock_mode_START (8)
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG2_apb_pll_lock_mode_END (8)
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG2_apb_lock_time_START (9)
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG2_apb_lock_time_END (21)
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG2_apb_pll_gt_stable_cnt_START (22)
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG2_apb_pll_gt_stable_cnt_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int apb_reload_instr_stable_cnt : 16;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 12;
    } reg;
} SOC_PMCTRL_DSS_DVFS_CNT_CFG3_UNION;
#endif
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG3_apb_reload_instr_stable_cnt_START (0)
#define SOC_PMCTRL_DSS_DVFS_CNT_CFG3_apb_reload_instr_stable_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int apb_intr_sf_dvfs_bypass : 1;
        unsigned int apb_intr_sf_dvfs_m3orcpu_msk : 1;
        unsigned int apb_intr_hw_dvfs_bypass : 1;
        unsigned int apb_intr_hw_dvfs_m3orcpu_msk : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 27;
    } reg;
} SOC_PMCTRL_DSS_DVFS_INTR_CFG_UNION;
#endif
#define SOC_PMCTRL_DSS_DVFS_INTR_CFG_apb_intr_sf_dvfs_bypass_START (0)
#define SOC_PMCTRL_DSS_DVFS_INTR_CFG_apb_intr_sf_dvfs_bypass_END (0)
#define SOC_PMCTRL_DSS_DVFS_INTR_CFG_apb_intr_sf_dvfs_m3orcpu_msk_START (1)
#define SOC_PMCTRL_DSS_DVFS_INTR_CFG_apb_intr_sf_dvfs_m3orcpu_msk_END (1)
#define SOC_PMCTRL_DSS_DVFS_INTR_CFG_apb_intr_hw_dvfs_bypass_START (2)
#define SOC_PMCTRL_DSS_DVFS_INTR_CFG_apb_intr_hw_dvfs_bypass_END (2)
#define SOC_PMCTRL_DSS_DVFS_INTR_CFG_apb_intr_hw_dvfs_m3orcpu_msk_START (3)
#define SOC_PMCTRL_DSS_DVFS_INTR_CFG_apb_intr_hw_dvfs_m3orcpu_msk_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int apb_intr_sf_dvfs_clr : 1;
        unsigned int apb_sf_escape : 1;
        unsigned int apb_sf_next_step : 1;
        unsigned int apb_sf_dvfs_en : 1;
        unsigned int apb_sf_instr_clr : 1;
        unsigned int reserved : 27;
    } reg;
} SOC_PMCTRL_HW_DSS_DVFS_SF_CH_UNION;
#endif
#define SOC_PMCTRL_HW_DSS_DVFS_SF_CH_apb_intr_sf_dvfs_clr_START (0)
#define SOC_PMCTRL_HW_DSS_DVFS_SF_CH_apb_intr_sf_dvfs_clr_END (0)
#define SOC_PMCTRL_HW_DSS_DVFS_SF_CH_apb_sf_escape_START (1)
#define SOC_PMCTRL_HW_DSS_DVFS_SF_CH_apb_sf_escape_END (1)
#define SOC_PMCTRL_HW_DSS_DVFS_SF_CH_apb_sf_next_step_START (2)
#define SOC_PMCTRL_HW_DSS_DVFS_SF_CH_apb_sf_next_step_END (2)
#define SOC_PMCTRL_HW_DSS_DVFS_SF_CH_apb_sf_dvfs_en_START (3)
#define SOC_PMCTRL_HW_DSS_DVFS_SF_CH_apb_sf_dvfs_en_END (3)
#define SOC_PMCTRL_HW_DSS_DVFS_SF_CH_apb_sf_instr_clr_START (4)
#define SOC_PMCTRL_HW_DSS_DVFS_SF_CH_apb_sf_instr_clr_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int apb_rd_sf_cur_instr_num : 4;
        unsigned int apb_rd_sf_cur_stat : 4;
        unsigned int apb_rd_sf_ch_vol_idx : 8;
        unsigned int apb_rd_intr_sf_dvfs_raw_stat : 1;
        unsigned int apb_rd_intr_sf_dvfs_stat : 1;
        unsigned int apb_rd_sf_ch_dvfs_busy : 1;
        unsigned int reserved : 13;
    } reg;
} SOC_PMCTRL_HW_DSS_DVFS_SF_RD_UNION;
#endif
#define SOC_PMCTRL_HW_DSS_DVFS_SF_RD_apb_rd_sf_cur_instr_num_START (0)
#define SOC_PMCTRL_HW_DSS_DVFS_SF_RD_apb_rd_sf_cur_instr_num_END (3)
#define SOC_PMCTRL_HW_DSS_DVFS_SF_RD_apb_rd_sf_cur_stat_START (4)
#define SOC_PMCTRL_HW_DSS_DVFS_SF_RD_apb_rd_sf_cur_stat_END (7)
#define SOC_PMCTRL_HW_DSS_DVFS_SF_RD_apb_rd_sf_ch_vol_idx_START (8)
#define SOC_PMCTRL_HW_DSS_DVFS_SF_RD_apb_rd_sf_ch_vol_idx_END (15)
#define SOC_PMCTRL_HW_DSS_DVFS_SF_RD_apb_rd_intr_sf_dvfs_raw_stat_START (16)
#define SOC_PMCTRL_HW_DSS_DVFS_SF_RD_apb_rd_intr_sf_dvfs_raw_stat_END (16)
#define SOC_PMCTRL_HW_DSS_DVFS_SF_RD_apb_rd_intr_sf_dvfs_stat_START (17)
#define SOC_PMCTRL_HW_DSS_DVFS_SF_RD_apb_rd_intr_sf_dvfs_stat_END (17)
#define SOC_PMCTRL_HW_DSS_DVFS_SF_RD_apb_rd_sf_ch_dvfs_busy_START (18)
#define SOC_PMCTRL_HW_DSS_DVFS_SF_RD_apb_rd_sf_ch_dvfs_busy_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int apb_intr_hw_dvfs_clr : 1;
        unsigned int apb_hw_escape : 1;
        unsigned int apb_hw_next_step : 1;
        unsigned int apb_hw_flush_pls_init : 1;
        unsigned int apb_hw_instr_clr : 1;
        unsigned int reserved_0 : 1;
        unsigned int apb_hw_dss2ddr_dfs_intr_clr : 1;
        unsigned int apb_hw_dss2ddr_escape : 1;
        unsigned int apb_hw_dss2ddr_next_step : 1;
        unsigned int apb_hw_dss2ddr_flush_pls_init : 1;
        unsigned int apb_dss2ddr_instr_clr : 1;
        unsigned int reserved_1 : 1;
        unsigned int apb_hw_dss2qice_dfs_intr_clr : 1;
        unsigned int apb_hw_dss2qice_escape : 1;
        unsigned int apb_hw_dss2qice_next_step : 1;
        unsigned int apb_hw_dss2qice_flush_pls_init : 1;
        unsigned int apb_dss2qice_instr_clr : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 12;
    } reg;
} SOC_PMCTRL_HW_DSS_DVFS_HW_CH_UNION;
#endif
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_intr_hw_dvfs_clr_START (0)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_intr_hw_dvfs_clr_END (0)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_hw_escape_START (1)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_hw_escape_END (1)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_hw_next_step_START (2)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_hw_next_step_END (2)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_hw_flush_pls_init_START (3)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_hw_flush_pls_init_END (3)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_hw_instr_clr_START (4)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_hw_instr_clr_END (4)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_hw_dss2ddr_dfs_intr_clr_START (6)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_hw_dss2ddr_dfs_intr_clr_END (6)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_hw_dss2ddr_escape_START (7)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_hw_dss2ddr_escape_END (7)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_hw_dss2ddr_next_step_START (8)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_hw_dss2ddr_next_step_END (8)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_hw_dss2ddr_flush_pls_init_START (9)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_hw_dss2ddr_flush_pls_init_END (9)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_dss2ddr_instr_clr_START (10)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_dss2ddr_instr_clr_END (10)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_hw_dss2qice_dfs_intr_clr_START (12)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_hw_dss2qice_dfs_intr_clr_END (12)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_hw_dss2qice_escape_START (13)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_hw_dss2qice_escape_END (13)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_hw_dss2qice_next_step_START (14)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_hw_dss2qice_next_step_END (14)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_hw_dss2qice_flush_pls_init_START (15)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_hw_dss2qice_flush_pls_init_END (15)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_dss2qice_instr_clr_START (16)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_CH_apb_dss2qice_instr_clr_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int apb_rd_hw_cur_instr_num : 6;
        unsigned int apb_rd_hw_cur_stat : 4;
        unsigned int apb_rd_hw_ch_vol_idx : 8;
        unsigned int apb_rd_intr_hw_dvfs_raw_stat : 1;
        unsigned int apb_rd_intr_hw_dvfs_stat : 1;
        unsigned int apb_rd_hw_ch_dvfs_busy : 1;
        unsigned int reserved : 11;
    } reg;
} SOC_PMCTRL_HW_DSS_DVFS_HW_RD_UNION;
#endif
#define SOC_PMCTRL_HW_DSS_DVFS_HW_RD_apb_rd_hw_cur_instr_num_START (0)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_RD_apb_rd_hw_cur_instr_num_END (5)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_RD_apb_rd_hw_cur_stat_START (6)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_RD_apb_rd_hw_cur_stat_END (9)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_RD_apb_rd_hw_ch_vol_idx_START (10)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_RD_apb_rd_hw_ch_vol_idx_END (17)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_RD_apb_rd_intr_hw_dvfs_raw_stat_START (18)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_RD_apb_rd_intr_hw_dvfs_raw_stat_END (18)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_RD_apb_rd_intr_hw_dvfs_stat_START (19)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_RD_apb_rd_intr_hw_dvfs_stat_END (19)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_RD_apb_rd_hw_ch_dvfs_busy_START (20)
#define SOC_PMCTRL_HW_DSS_DVFS_HW_RD_apb_rd_hw_ch_dvfs_busy_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int apb_hw_dvfs_enable : 1;
        unsigned int apb_hw_instr_lock : 1;
        unsigned int reserved_0 : 1;
        unsigned int apb_hw_dss2ddr_dfs_enable : 1;
        unsigned int apb_dss2ddr_instr_lock : 1;
        unsigned int reserved_1 : 1;
        unsigned int apb_hw_dss2qice_dfs_enable : 1;
        unsigned int apb_dss2qice_instr_lock : 1;
        unsigned int reserved_2 : 1;
        unsigned int apb_hw_ch_fps_cnt : 3;
        unsigned int apb_hw_ch_fps_cnt_dss_bypass : 1;
        unsigned int apb_hw_ch_fps_cnt_dss2qice_bypass : 1;
        unsigned int apb_hw_ch_fps_cnt_dss2ddr_bypass : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 16;
    } reg;
} SOC_PMCTRL_APB_DSS_DVFS_HW_EN_UNION;
#endif
#define SOC_PMCTRL_APB_DSS_DVFS_HW_EN_apb_hw_dvfs_enable_START (0)
#define SOC_PMCTRL_APB_DSS_DVFS_HW_EN_apb_hw_dvfs_enable_END (0)
#define SOC_PMCTRL_APB_DSS_DVFS_HW_EN_apb_hw_instr_lock_START (1)
#define SOC_PMCTRL_APB_DSS_DVFS_HW_EN_apb_hw_instr_lock_END (1)
#define SOC_PMCTRL_APB_DSS_DVFS_HW_EN_apb_hw_dss2ddr_dfs_enable_START (3)
#define SOC_PMCTRL_APB_DSS_DVFS_HW_EN_apb_hw_dss2ddr_dfs_enable_END (3)
#define SOC_PMCTRL_APB_DSS_DVFS_HW_EN_apb_dss2ddr_instr_lock_START (4)
#define SOC_PMCTRL_APB_DSS_DVFS_HW_EN_apb_dss2ddr_instr_lock_END (4)
#define SOC_PMCTRL_APB_DSS_DVFS_HW_EN_apb_hw_dss2qice_dfs_enable_START (6)
#define SOC_PMCTRL_APB_DSS_DVFS_HW_EN_apb_hw_dss2qice_dfs_enable_END (6)
#define SOC_PMCTRL_APB_DSS_DVFS_HW_EN_apb_dss2qice_instr_lock_START (7)
#define SOC_PMCTRL_APB_DSS_DVFS_HW_EN_apb_dss2qice_instr_lock_END (7)
#define SOC_PMCTRL_APB_DSS_DVFS_HW_EN_apb_hw_ch_fps_cnt_START (9)
#define SOC_PMCTRL_APB_DSS_DVFS_HW_EN_apb_hw_ch_fps_cnt_END (11)
#define SOC_PMCTRL_APB_DSS_DVFS_HW_EN_apb_hw_ch_fps_cnt_dss_bypass_START (12)
#define SOC_PMCTRL_APB_DSS_DVFS_HW_EN_apb_hw_ch_fps_cnt_dss_bypass_END (12)
#define SOC_PMCTRL_APB_DSS_DVFS_HW_EN_apb_hw_ch_fps_cnt_dss2qice_bypass_START (13)
#define SOC_PMCTRL_APB_DSS_DVFS_HW_EN_apb_hw_ch_fps_cnt_dss2qice_bypass_END (13)
#define SOC_PMCTRL_APB_DSS_DVFS_HW_EN_apb_hw_ch_fps_cnt_dss2ddr_bypass_START (14)
#define SOC_PMCTRL_APB_DSS_DVFS_HW_EN_apb_hw_ch_fps_cnt_dss2ddr_bypass_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int apb_sf_instr_lock : 1;
        unsigned int reserved_0 : 15;
        unsigned int reserved_1 : 16;
    } reg;
} SOC_PMCTRL_APB_DSS_DVFS_SF_EN_UNION;
#endif
#define SOC_PMCTRL_APB_DSS_DVFS_SF_EN_apb_sf_instr_lock_START (0)
#define SOC_PMCTRL_APB_DSS_DVFS_SF_EN_apb_sf_instr_lock_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_dss_avs_vol_idx_0 : 32;
    } reg;
} SOC_PMCTRL_PERI_DSS_AVS_VOL_IDX_0_UNION;
#endif
#define SOC_PMCTRL_PERI_DSS_AVS_VOL_IDX_0_peri_dss_avs_vol_idx_0_START (0)
#define SOC_PMCTRL_PERI_DSS_AVS_VOL_IDX_0_peri_dss_avs_vol_idx_0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int peri_dss_avs_vol_idx_1 : 32;
    } reg;
} SOC_PMCTRL_PERI_DSS_AVS_VOL_IDX_1_UNION;
#endif
#define SOC_PMCTRL_PERI_DSS_AVS_VOL_IDX_1_peri_dss_avs_vol_idx_1_START (0)
#define SOC_PMCTRL_PERI_DSS_AVS_VOL_IDX_1_peri_dss_avs_vol_idx_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int reserved : 32;
    } reg;
} SOC_PMCTRL_APB_DSS2DDR_INSTR_LIST_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int reserved : 32;
    } reg;
} SOC_PMCTRL_APB_DSS2QICE_INSTR_LIST_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int apb_sf_dss2ddr_freq_idx : 15;
        unsigned int apb_sf_dss2ddr_freq_chg : 1;
        unsigned int apb_sf_dss2ddr_freq_up : 1;
        unsigned int reserved : 15;
    } reg;
} SOC_PMCTRL_HW_DSS2DDR_DFS_SF_CFG_UNION;
#endif
#define SOC_PMCTRL_HW_DSS2DDR_DFS_SF_CFG_apb_sf_dss2ddr_freq_idx_START (0)
#define SOC_PMCTRL_HW_DSS2DDR_DFS_SF_CFG_apb_sf_dss2ddr_freq_idx_END (14)
#define SOC_PMCTRL_HW_DSS2DDR_DFS_SF_CFG_apb_sf_dss2ddr_freq_chg_START (15)
#define SOC_PMCTRL_HW_DSS2DDR_DFS_SF_CFG_apb_sf_dss2ddr_freq_chg_END (15)
#define SOC_PMCTRL_HW_DSS2DDR_DFS_SF_CFG_apb_sf_dss2ddr_freq_up_START (16)
#define SOC_PMCTRL_HW_DSS2DDR_DFS_SF_CFG_apb_sf_dss2ddr_freq_up_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int apb_sf_dss2qice_freq_idx : 15;
        unsigned int apb_sf_dss2qice_freq_chg : 1;
        unsigned int apb_sf_dss2qice_freq_up : 1;
        unsigned int reserved : 15;
    } reg;
} SOC_PMCTRL_HW_DSS2QICE_DFS_SF_CFG_UNION;
#endif
#define SOC_PMCTRL_HW_DSS2QICE_DFS_SF_CFG_apb_sf_dss2qice_freq_idx_START (0)
#define SOC_PMCTRL_HW_DSS2QICE_DFS_SF_CFG_apb_sf_dss2qice_freq_idx_END (14)
#define SOC_PMCTRL_HW_DSS2QICE_DFS_SF_CFG_apb_sf_dss2qice_freq_chg_START (15)
#define SOC_PMCTRL_HW_DSS2QICE_DFS_SF_CFG_apb_sf_dss2qice_freq_chg_END (15)
#define SOC_PMCTRL_HW_DSS2QICE_DFS_SF_CFG_apb_sf_dss2qice_freq_up_START (16)
#define SOC_PMCTRL_HW_DSS2QICE_DFS_SF_CFG_apb_sf_dss2qice_freq_up_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int apb_rd_hw_dss2ddr_freq_up_flag : 1;
        unsigned int apb_rd_sf_dss2ddr_freq_up_flag : 1;
        unsigned int apb_hw_dss2ddr_freq_up_flag_clr : 1;
        unsigned int apb_sf_dss2ddr_freq_up_flag_clr : 1;
        unsigned int reserved_0 : 1;
        unsigned int apb_rd_hw_dss2qice_freq_up_flag : 1;
        unsigned int apb_rd_sf_dss2qice_freq_up_flag : 1;
        unsigned int apb_hw_dss2qice_freq_up_flag_clr : 1;
        unsigned int apb_sf_dss2qice_freq_up_flag_clr : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 22;
    } reg;
} SOC_PMCTRL_HW_DSS2DDR2QICE_DFS_UP_FLAG_UNION;
#endif
#define SOC_PMCTRL_HW_DSS2DDR2QICE_DFS_UP_FLAG_apb_rd_hw_dss2ddr_freq_up_flag_START (0)
#define SOC_PMCTRL_HW_DSS2DDR2QICE_DFS_UP_FLAG_apb_rd_hw_dss2ddr_freq_up_flag_END (0)
#define SOC_PMCTRL_HW_DSS2DDR2QICE_DFS_UP_FLAG_apb_rd_sf_dss2ddr_freq_up_flag_START (1)
#define SOC_PMCTRL_HW_DSS2DDR2QICE_DFS_UP_FLAG_apb_rd_sf_dss2ddr_freq_up_flag_END (1)
#define SOC_PMCTRL_HW_DSS2DDR2QICE_DFS_UP_FLAG_apb_hw_dss2ddr_freq_up_flag_clr_START (2)
#define SOC_PMCTRL_HW_DSS2DDR2QICE_DFS_UP_FLAG_apb_hw_dss2ddr_freq_up_flag_clr_END (2)
#define SOC_PMCTRL_HW_DSS2DDR2QICE_DFS_UP_FLAG_apb_sf_dss2ddr_freq_up_flag_clr_START (3)
#define SOC_PMCTRL_HW_DSS2DDR2QICE_DFS_UP_FLAG_apb_sf_dss2ddr_freq_up_flag_clr_END (3)
#define SOC_PMCTRL_HW_DSS2DDR2QICE_DFS_UP_FLAG_apb_rd_hw_dss2qice_freq_up_flag_START (5)
#define SOC_PMCTRL_HW_DSS2DDR2QICE_DFS_UP_FLAG_apb_rd_hw_dss2qice_freq_up_flag_END (5)
#define SOC_PMCTRL_HW_DSS2DDR2QICE_DFS_UP_FLAG_apb_rd_sf_dss2qice_freq_up_flag_START (6)
#define SOC_PMCTRL_HW_DSS2DDR2QICE_DFS_UP_FLAG_apb_rd_sf_dss2qice_freq_up_flag_END (6)
#define SOC_PMCTRL_HW_DSS2DDR2QICE_DFS_UP_FLAG_apb_hw_dss2qice_freq_up_flag_clr_START (7)
#define SOC_PMCTRL_HW_DSS2DDR2QICE_DFS_UP_FLAG_apb_hw_dss2qice_freq_up_flag_clr_END (7)
#define SOC_PMCTRL_HW_DSS2DDR2QICE_DFS_UP_FLAG_apb_sf_dss2qice_freq_up_flag_clr_START (8)
#define SOC_PMCTRL_HW_DSS2DDR2QICE_DFS_UP_FLAG_apb_sf_dss2qice_freq_up_flag_clr_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int apb_rd_hw_dss2ddr_dfs_cur_instr_num : 5;
        unsigned int apb_rd_hw_dss2ddr_dfs_cur_stat : 4;
        unsigned int apb_rd_dss2ddr_freq_idx : 15;
        unsigned int apb_rd_hw_dss2ddr_dfs_intr_raw_stat : 1;
        unsigned int apb_rd_ddr_cur_freq_max_flag : 1;
        unsigned int reserved : 6;
    } reg;
} SOC_PMCTRL_HW_DSS2DDR_DFS_RD_UNION;
#endif
#define SOC_PMCTRL_HW_DSS2DDR_DFS_RD_apb_rd_hw_dss2ddr_dfs_cur_instr_num_START (0)
#define SOC_PMCTRL_HW_DSS2DDR_DFS_RD_apb_rd_hw_dss2ddr_dfs_cur_instr_num_END (4)
#define SOC_PMCTRL_HW_DSS2DDR_DFS_RD_apb_rd_hw_dss2ddr_dfs_cur_stat_START (5)
#define SOC_PMCTRL_HW_DSS2DDR_DFS_RD_apb_rd_hw_dss2ddr_dfs_cur_stat_END (8)
#define SOC_PMCTRL_HW_DSS2DDR_DFS_RD_apb_rd_dss2ddr_freq_idx_START (9)
#define SOC_PMCTRL_HW_DSS2DDR_DFS_RD_apb_rd_dss2ddr_freq_idx_END (23)
#define SOC_PMCTRL_HW_DSS2DDR_DFS_RD_apb_rd_hw_dss2ddr_dfs_intr_raw_stat_START (24)
#define SOC_PMCTRL_HW_DSS2DDR_DFS_RD_apb_rd_hw_dss2ddr_dfs_intr_raw_stat_END (24)
#define SOC_PMCTRL_HW_DSS2DDR_DFS_RD_apb_rd_ddr_cur_freq_max_flag_START (25)
#define SOC_PMCTRL_HW_DSS2DDR_DFS_RD_apb_rd_ddr_cur_freq_max_flag_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int apb_rd_hw_dss2qice_dfs_cur_instr_num : 5;
        unsigned int apb_rd_hw_dss2qice_dfs_cur_stat : 4;
        unsigned int apb_rd_dss2qice_freq_idx : 15;
        unsigned int apb_rd_hw_dss2qice_dfs_intr_raw_stat : 1;
        unsigned int apb_rd_qice_cur_freq_max_flag : 1;
        unsigned int reserved : 6;
    } reg;
} SOC_PMCTRL_HW_DSS2QICE_DFS_RD_UNION;
#endif
#define SOC_PMCTRL_HW_DSS2QICE_DFS_RD_apb_rd_hw_dss2qice_dfs_cur_instr_num_START (0)
#define SOC_PMCTRL_HW_DSS2QICE_DFS_RD_apb_rd_hw_dss2qice_dfs_cur_instr_num_END (4)
#define SOC_PMCTRL_HW_DSS2QICE_DFS_RD_apb_rd_hw_dss2qice_dfs_cur_stat_START (5)
#define SOC_PMCTRL_HW_DSS2QICE_DFS_RD_apb_rd_hw_dss2qice_dfs_cur_stat_END (8)
#define SOC_PMCTRL_HW_DSS2QICE_DFS_RD_apb_rd_dss2qice_freq_idx_START (9)
#define SOC_PMCTRL_HW_DSS2QICE_DFS_RD_apb_rd_dss2qice_freq_idx_END (23)
#define SOC_PMCTRL_HW_DSS2QICE_DFS_RD_apb_rd_hw_dss2qice_dfs_intr_raw_stat_START (24)
#define SOC_PMCTRL_HW_DSS2QICE_DFS_RD_apb_rd_hw_dss2qice_dfs_intr_raw_stat_END (24)
#define SOC_PMCTRL_HW_DSS2QICE_DFS_RD_apb_rd_qice_cur_freq_max_flag_START (25)
#define SOC_PMCTRL_HW_DSS2QICE_DFS_RD_apb_rd_qice_cur_freq_max_flag_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int apb_ddr_cur_freq_idx : 15;
        unsigned int apb_ddr_qice_cur_freq_msk0 : 1;
        unsigned int apb_qice_cur_freq_idx : 15;
        unsigned int apb_ddr_qice_cur_freq_msk1 : 1;
    } reg;
} SOC_PMCTRL_APB_DDR_QICE_CUR_FREQ_UNION;
#endif
#define SOC_PMCTRL_APB_DDR_QICE_CUR_FREQ_apb_ddr_cur_freq_idx_START (0)
#define SOC_PMCTRL_APB_DDR_QICE_CUR_FREQ_apb_ddr_cur_freq_idx_END (14)
#define SOC_PMCTRL_APB_DDR_QICE_CUR_FREQ_apb_ddr_qice_cur_freq_msk0_START (15)
#define SOC_PMCTRL_APB_DDR_QICE_CUR_FREQ_apb_ddr_qice_cur_freq_msk0_END (15)
#define SOC_PMCTRL_APB_DDR_QICE_CUR_FREQ_apb_qice_cur_freq_idx_START (16)
#define SOC_PMCTRL_APB_DDR_QICE_CUR_FREQ_apb_qice_cur_freq_idx_END (30)
#define SOC_PMCTRL_APB_DDR_QICE_CUR_FREQ_apb_ddr_qice_cur_freq_msk1_START (31)
#define SOC_PMCTRL_APB_DDR_QICE_CUR_FREQ_apb_ddr_qice_cur_freq_msk1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int pmc_hw_dss_dvfs_vsync_sync : 1;
        unsigned int pmc_hw_dss_dvfs_flush_en_sync : 1;
        unsigned int pmc_hw_dss2ddr_dfs_chg_sync : 1;
        unsigned int pmc_hw_dss2ddr_dfs_chg_valid_sync : 1;
        unsigned int dss2dq_valid_cnt : 4;
        unsigned int dss2dq_chg_cnt : 8;
        unsigned int flush_cnt : 8;
        unsigned int vsync_cnt : 8;
    } reg;
} SOC_PMCTRL_APB_RD_DSS2DQ_DEBUG_UNION;
#endif
#define SOC_PMCTRL_APB_RD_DSS2DQ_DEBUG_pmc_hw_dss_dvfs_vsync_sync_START (0)
#define SOC_PMCTRL_APB_RD_DSS2DQ_DEBUG_pmc_hw_dss_dvfs_vsync_sync_END (0)
#define SOC_PMCTRL_APB_RD_DSS2DQ_DEBUG_pmc_hw_dss_dvfs_flush_en_sync_START (1)
#define SOC_PMCTRL_APB_RD_DSS2DQ_DEBUG_pmc_hw_dss_dvfs_flush_en_sync_END (1)
#define SOC_PMCTRL_APB_RD_DSS2DQ_DEBUG_pmc_hw_dss2ddr_dfs_chg_sync_START (2)
#define SOC_PMCTRL_APB_RD_DSS2DQ_DEBUG_pmc_hw_dss2ddr_dfs_chg_sync_END (2)
#define SOC_PMCTRL_APB_RD_DSS2DQ_DEBUG_pmc_hw_dss2ddr_dfs_chg_valid_sync_START (3)
#define SOC_PMCTRL_APB_RD_DSS2DQ_DEBUG_pmc_hw_dss2ddr_dfs_chg_valid_sync_END (3)
#define SOC_PMCTRL_APB_RD_DSS2DQ_DEBUG_dss2dq_valid_cnt_START (4)
#define SOC_PMCTRL_APB_RD_DSS2DQ_DEBUG_dss2dq_valid_cnt_END (7)
#define SOC_PMCTRL_APB_RD_DSS2DQ_DEBUG_dss2dq_chg_cnt_START (8)
#define SOC_PMCTRL_APB_RD_DSS2DQ_DEBUG_dss2dq_chg_cnt_END (15)
#define SOC_PMCTRL_APB_RD_DSS2DQ_DEBUG_flush_cnt_START (16)
#define SOC_PMCTRL_APB_RD_DSS2DQ_DEBUG_flush_cnt_END (23)
#define SOC_PMCTRL_APB_RD_DSS2DQ_DEBUG_vsync_cnt_START (24)
#define SOC_PMCTRL_APB_RD_DSS2DQ_DEBUG_vsync_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int dss_dvfs_valid_cnt : 4;
        unsigned int dss_dvfs_chg_cnt : 8;
        unsigned int reserved_4 : 8;
        unsigned int reserved_5 : 8;
    } reg;
} SOC_PMCTRL_APB_RD_DSS_DVFS_DEBUG_UNION;
#endif
#define SOC_PMCTRL_APB_RD_DSS_DVFS_DEBUG_dss_dvfs_valid_cnt_START (4)
#define SOC_PMCTRL_APB_RD_DSS_DVFS_DEBUG_dss_dvfs_valid_cnt_END (7)
#define SOC_PMCTRL_APB_RD_DSS_DVFS_DEBUG_dss_dvfs_chg_cnt_START (8)
#define SOC_PMCTRL_APB_RD_DSS_DVFS_DEBUG_dss_dvfs_chg_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int apb_dss2dq_debug_en : 1;
        unsigned int apb_dss2dq_valid_cnt_clr : 1;
        unsigned int apb_dss2dq_chg_cnt_clr : 1;
        unsigned int apb_flush_cnt_clr : 1;
        unsigned int apb_vsync_cnt_clr : 1;
        unsigned int reserved_0 : 1;
        unsigned int apb_dss_dvfs_debug_en : 1;
        unsigned int apb_dss_dvfs_valid_cnt_clr : 1;
        unsigned int apb_dss_dvfs_chg_cnt_clr : 1;
        unsigned int reserved_1 : 23;
    } reg;
} SOC_PMCTRL_APB_DEBUG_CFG_UNION;
#endif
#define SOC_PMCTRL_APB_DEBUG_CFG_apb_dss2dq_debug_en_START (0)
#define SOC_PMCTRL_APB_DEBUG_CFG_apb_dss2dq_debug_en_END (0)
#define SOC_PMCTRL_APB_DEBUG_CFG_apb_dss2dq_valid_cnt_clr_START (1)
#define SOC_PMCTRL_APB_DEBUG_CFG_apb_dss2dq_valid_cnt_clr_END (1)
#define SOC_PMCTRL_APB_DEBUG_CFG_apb_dss2dq_chg_cnt_clr_START (2)
#define SOC_PMCTRL_APB_DEBUG_CFG_apb_dss2dq_chg_cnt_clr_END (2)
#define SOC_PMCTRL_APB_DEBUG_CFG_apb_flush_cnt_clr_START (3)
#define SOC_PMCTRL_APB_DEBUG_CFG_apb_flush_cnt_clr_END (3)
#define SOC_PMCTRL_APB_DEBUG_CFG_apb_vsync_cnt_clr_START (4)
#define SOC_PMCTRL_APB_DEBUG_CFG_apb_vsync_cnt_clr_END (4)
#define SOC_PMCTRL_APB_DEBUG_CFG_apb_dss_dvfs_debug_en_START (6)
#define SOC_PMCTRL_APB_DEBUG_CFG_apb_dss_dvfs_debug_en_END (6)
#define SOC_PMCTRL_APB_DEBUG_CFG_apb_dss_dvfs_valid_cnt_clr_START (7)
#define SOC_PMCTRL_APB_DEBUG_CFG_apb_dss_dvfs_valid_cnt_clr_END (7)
#define SOC_PMCTRL_APB_DEBUG_CFG_apb_dss_dvfs_chg_cnt_clr_START (8)
#define SOC_PMCTRL_APB_DEBUG_CFG_apb_dss_dvfs_chg_cnt_clr_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int vddc_mem_vote_vol_idx_0 : 8;
        unsigned int vddc_mem_vote_vol_idx_1 : 8;
        unsigned int vddc_mem_vote_vol_idx_2 : 8;
        unsigned int vddc_mem_vote_vol_idx_3 : 8;
    } reg;
} SOC_PMCTRL_VDDC_MEM_VOTE_VOL_IDX_UNION;
#endif
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_IDX_vddc_mem_vote_vol_idx_0_START (0)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_IDX_vddc_mem_vote_vol_idx_0_END (7)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_IDX_vddc_mem_vote_vol_idx_1_START (8)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_IDX_vddc_mem_vote_vol_idx_1_END (15)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_IDX_vddc_mem_vote_vol_idx_2_START (16)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_IDX_vddc_mem_vote_vol_idx_2_END (23)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_IDX_vddc_mem_vote_vol_idx_3_START (24)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_IDX_vddc_mem_vote_vol_idx_3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int vddc_mem_vote_vol_rank_0 : 2;
        unsigned int vddc_mem_vote_vol_rank_1 : 2;
        unsigned int vddc_mem_vote_vol_rank_2 : 2;
        unsigned int vddc_mem_vote_vol_rank_3 : 2;
        unsigned int vddc_mem_vote_vol_rank_4 : 2;
        unsigned int vddc_mem_vote_vol_rank_5 : 2;
        unsigned int vddc_mem_vote_vol_rank_6 : 2;
        unsigned int vddc_mem_vote_vol_rank_7 : 2;
        unsigned int reserved : 16;
    } reg;
} SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_0_UNION;
#endif
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_0_vddc_mem_vote_vol_rank_0_START (0)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_0_vddc_mem_vote_vol_rank_0_END (1)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_0_vddc_mem_vote_vol_rank_1_START (2)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_0_vddc_mem_vote_vol_rank_1_END (3)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_0_vddc_mem_vote_vol_rank_2_START (4)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_0_vddc_mem_vote_vol_rank_2_END (5)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_0_vddc_mem_vote_vol_rank_3_START (6)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_0_vddc_mem_vote_vol_rank_3_END (7)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_0_vddc_mem_vote_vol_rank_4_START (8)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_0_vddc_mem_vote_vol_rank_4_END (9)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_0_vddc_mem_vote_vol_rank_5_START (10)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_0_vddc_mem_vote_vol_rank_5_END (11)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_0_vddc_mem_vote_vol_rank_6_START (12)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_0_vddc_mem_vote_vol_rank_6_END (13)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_0_vddc_mem_vote_vol_rank_7_START (14)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_0_vddc_mem_vote_vol_rank_7_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int vddc_mem_vote_vol_rank_8 : 2;
        unsigned int vddc_mem_vote_vol_rank_9 : 2;
        unsigned int vddc_mem_vote_vol_rank_10 : 2;
        unsigned int vddc_mem_vote_vol_rank_11 : 2;
        unsigned int vddc_mem_vote_vol_rank_12 : 2;
        unsigned int vddc_mem_vote_vol_rank_13 : 2;
        unsigned int vddc_mem_vote_vol_rank_14 : 2;
        unsigned int vddc_mem_vote_vol_rank_15 : 2;
        unsigned int reserved : 16;
    } reg;
} SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_1_UNION;
#endif
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_1_vddc_mem_vote_vol_rank_8_START (0)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_1_vddc_mem_vote_vol_rank_8_END (1)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_1_vddc_mem_vote_vol_rank_9_START (2)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_1_vddc_mem_vote_vol_rank_9_END (3)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_1_vddc_mem_vote_vol_rank_10_START (4)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_1_vddc_mem_vote_vol_rank_10_END (5)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_1_vddc_mem_vote_vol_rank_11_START (6)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_1_vddc_mem_vote_vol_rank_11_END (7)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_1_vddc_mem_vote_vol_rank_12_START (8)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_1_vddc_mem_vote_vol_rank_12_END (9)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_1_vddc_mem_vote_vol_rank_13_START (10)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_1_vddc_mem_vote_vol_rank_13_END (11)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_1_vddc_mem_vote_vol_rank_14_START (12)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_1_vddc_mem_vote_vol_rank_14_END (13)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_1_vddc_mem_vote_vol_rank_15_START (14)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_1_vddc_mem_vote_vol_rank_15_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int vddc_mem_vote_vol_rank_16 : 2;
        unsigned int vddc_mem_vote_vol_rank_17 : 2;
        unsigned int vddc_mem_vote_vol_rank_18 : 2;
        unsigned int vddc_mem_vote_vol_rank_19 : 2;
        unsigned int vddc_mem_vote_vol_rank_20 : 2;
        unsigned int vddc_mem_vote_vol_rank_21 : 2;
        unsigned int vddc_mem_vote_vol_rank_22 : 2;
        unsigned int vddc_mem_vote_vol_rank_23 : 2;
        unsigned int reserved : 16;
    } reg;
} SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_2_UNION;
#endif
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_2_vddc_mem_vote_vol_rank_16_START (0)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_2_vddc_mem_vote_vol_rank_16_END (1)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_2_vddc_mem_vote_vol_rank_17_START (2)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_2_vddc_mem_vote_vol_rank_17_END (3)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_2_vddc_mem_vote_vol_rank_18_START (4)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_2_vddc_mem_vote_vol_rank_18_END (5)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_2_vddc_mem_vote_vol_rank_19_START (6)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_2_vddc_mem_vote_vol_rank_19_END (7)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_2_vddc_mem_vote_vol_rank_20_START (8)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_2_vddc_mem_vote_vol_rank_20_END (9)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_2_vddc_mem_vote_vol_rank_21_START (10)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_2_vddc_mem_vote_vol_rank_21_END (11)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_2_vddc_mem_vote_vol_rank_22_START (12)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_2_vddc_mem_vote_vol_rank_22_END (13)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_2_vddc_mem_vote_vol_rank_23_START (14)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_RANK_SFT_2_vddc_mem_vote_vol_rank_23_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int vddc_mem_vote_vol_valid_0 : 1;
        unsigned int vddc_mem_vote_vol_valid_1 : 1;
        unsigned int vddc_mem_vote_vol_valid_2 : 1;
        unsigned int vddc_mem_vote_vol_valid_3 : 1;
        unsigned int vddc_mem_vote_vol_valid_4 : 1;
        unsigned int vddc_mem_vote_vol_valid_5 : 1;
        unsigned int vddc_mem_vote_vol_valid_6 : 1;
        unsigned int vddc_mem_vote_vol_valid_7 : 1;
        unsigned int vddc_mem_vote_vol_valid_8 : 1;
        unsigned int vddc_mem_vote_vol_valid_9 : 1;
        unsigned int vddc_mem_vote_vol_valid_10 : 1;
        unsigned int vddc_mem_vote_vol_valid_11 : 1;
        unsigned int vddc_mem_vote_vol_valid_12 : 1;
        unsigned int vddc_mem_vote_vol_valid_13 : 1;
        unsigned int vddc_mem_vote_vol_valid_14 : 1;
        unsigned int vddc_mem_vote_vol_valid_15 : 1;
        unsigned int reserved : 16;
    } reg;
} SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_UNION;
#endif
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_0_START (0)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_0_END (0)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_1_START (1)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_1_END (1)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_2_START (2)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_2_END (2)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_3_START (3)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_3_END (3)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_4_START (4)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_4_END (4)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_5_START (5)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_5_END (5)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_6_START (6)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_6_END (6)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_7_START (7)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_7_END (7)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_8_START (8)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_8_END (8)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_9_START (9)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_9_END (9)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_10_START (10)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_10_END (10)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_11_START (11)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_11_END (11)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_12_START (12)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_12_END (12)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_13_START (13)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_13_END (13)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_14_START (14)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_14_END (14)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_15_START (15)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_0_vddc_mem_vote_vol_valid_15_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int vddc_mem_vote_vol_valid_16 : 1;
        unsigned int vddc_mem_vote_vol_valid_17 : 1;
        unsigned int vddc_mem_vote_vol_valid_18 : 1;
        unsigned int vddc_mem_vote_vol_valid_19 : 1;
        unsigned int vddc_mem_vote_vol_valid_20 : 1;
        unsigned int vddc_mem_vote_vol_valid_21 : 1;
        unsigned int vddc_mem_vote_vol_valid_22 : 1;
        unsigned int vddc_mem_vote_vol_valid_23 : 1;
        unsigned int reserved_0 : 8;
        unsigned int reserved_1 : 16;
    } reg;
} SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_1_UNION;
#endif
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_1_vddc_mem_vote_vol_valid_16_START (0)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_1_vddc_mem_vote_vol_valid_16_END (0)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_1_vddc_mem_vote_vol_valid_17_START (1)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_1_vddc_mem_vote_vol_valid_17_END (1)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_1_vddc_mem_vote_vol_valid_18_START (2)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_1_vddc_mem_vote_vol_valid_18_END (2)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_1_vddc_mem_vote_vol_valid_19_START (3)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_1_vddc_mem_vote_vol_valid_19_END (3)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_1_vddc_mem_vote_vol_valid_20_START (4)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_1_vddc_mem_vote_vol_valid_20_END (4)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_1_vddc_mem_vote_vol_valid_21_START (5)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_1_vddc_mem_vote_vol_valid_21_END (5)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_1_vddc_mem_vote_vol_valid_22_START (6)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_1_vddc_mem_vote_vol_valid_22_END (6)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_1_vddc_mem_vote_vol_valid_23_START (7)
#define SOC_PMCTRL_VDDC_MEM_VOTE_VOL_VALID_1_vddc_mem_vote_vol_valid_23_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int vddc_mem_vote_sft_chg_0 : 1;
        unsigned int vddc_mem_vote_sft_chg_1 : 1;
        unsigned int vddc_mem_vote_sft_chg_2 : 1;
        unsigned int vddc_mem_vote_sft_chg_3 : 1;
        unsigned int vddc_mem_vote_sft_chg_4 : 1;
        unsigned int vddc_mem_vote_sft_chg_5 : 1;
        unsigned int vddc_mem_vote_sft_chg_6 : 1;
        unsigned int vddc_mem_vote_sft_chg_7 : 1;
        unsigned int vddc_mem_vote_sft_chg_8 : 1;
        unsigned int vddc_mem_vote_sft_chg_9 : 1;
        unsigned int vddc_mem_vote_sft_chg_10 : 1;
        unsigned int vddc_mem_vote_sft_chg_11 : 1;
        unsigned int vddc_mem_vote_sft_chg_12 : 1;
        unsigned int vddc_mem_vote_sft_chg_13 : 1;
        unsigned int vddc_mem_vote_sft_chg_14 : 1;
        unsigned int vddc_mem_vote_sft_chg_15 : 1;
        unsigned int vddc_mem_vote_sft_chg_16 : 1;
        unsigned int vddc_mem_vote_sft_chg_17 : 1;
        unsigned int vddc_mem_vote_sft_chg_18 : 1;
        unsigned int vddc_mem_vote_sft_chg_19 : 1;
        unsigned int vddc_mem_vote_sft_chg_20 : 1;
        unsigned int vddc_mem_vote_sft_chg_21 : 1;
        unsigned int vddc_mem_vote_sft_chg_22 : 1;
        unsigned int vddc_mem_vote_sft_chg_23 : 1;
        unsigned int reserved : 8;
    } reg;
} SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_UNION;
#endif
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_0_START (0)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_0_END (0)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_1_START (1)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_1_END (1)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_2_START (2)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_2_END (2)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_3_START (3)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_3_END (3)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_4_START (4)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_4_END (4)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_5_START (5)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_5_END (5)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_6_START (6)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_6_END (6)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_7_START (7)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_7_END (7)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_8_START (8)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_8_END (8)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_9_START (9)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_9_END (9)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_10_START (10)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_10_END (10)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_11_START (11)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_11_END (11)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_12_START (12)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_12_END (12)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_13_START (13)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_13_END (13)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_14_START (14)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_14_END (14)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_15_START (15)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_15_END (15)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_16_START (16)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_16_END (16)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_17_START (17)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_17_END (17)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_18_START (18)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_18_END (18)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_19_START (19)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_19_END (19)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_20_START (20)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_20_END (20)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_21_START (21)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_21_END (21)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_22_START (22)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_22_END (22)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_23_START (23)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_vddc_mem_vote_sft_chg_23_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int vddc_mem_vote_sft_chg_bypass_0 : 1;
        unsigned int vddc_mem_vote_sft_chg_bypass_1 : 1;
        unsigned int vddc_mem_vote_sft_chg_bypass_2 : 1;
        unsigned int vddc_mem_vote_sft_chg_bypass_3 : 1;
        unsigned int vddc_mem_vote_sft_chg_bypass_4 : 1;
        unsigned int vddc_mem_vote_sft_chg_bypass_5 : 1;
        unsigned int vddc_mem_vote_sft_chg_bypass_6 : 1;
        unsigned int vddc_mem_vote_sft_chg_bypass_7 : 1;
        unsigned int vddc_mem_vote_sft_chg_bypass_8 : 1;
        unsigned int vddc_mem_vote_sft_chg_bypass_9 : 1;
        unsigned int vddc_mem_vote_sft_chg_bypass_10 : 1;
        unsigned int vddc_mem_vote_sft_chg_bypass_11 : 1;
        unsigned int vddc_mem_vote_sft_chg_bypass_12 : 1;
        unsigned int vddc_mem_vote_sft_chg_bypass_13 : 1;
        unsigned int vddc_mem_vote_sft_chg_bypass_14 : 1;
        unsigned int vddc_mem_vote_sft_chg_bypass_15 : 1;
        unsigned int vddc_mem_vote_sft_chg_bypass_16 : 1;
        unsigned int vddc_mem_vote_sft_chg_bypass_17 : 1;
        unsigned int vddc_mem_vote_sft_chg_bypass_18 : 1;
        unsigned int vddc_mem_vote_sft_chg_bypass_19 : 1;
        unsigned int vddc_mem_vote_sft_chg_bypass_20 : 1;
        unsigned int vddc_mem_vote_sft_chg_bypass_21 : 1;
        unsigned int vddc_mem_vote_sft_chg_bypass_22 : 1;
        unsigned int vddc_mem_vote_sft_chg_bypass_23 : 1;
        unsigned int reserved : 8;
    } reg;
} SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_UNION;
#endif
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_0_START (0)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_0_END (0)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_1_START (1)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_1_END (1)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_2_START (2)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_2_END (2)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_3_START (3)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_3_END (3)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_4_START (4)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_4_END (4)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_5_START (5)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_5_END (5)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_6_START (6)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_6_END (6)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_7_START (7)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_7_END (7)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_8_START (8)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_8_END (8)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_9_START (9)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_9_END (9)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_10_START (10)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_10_END (10)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_11_START (11)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_11_END (11)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_12_START (12)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_12_END (12)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_13_START (13)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_13_END (13)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_14_START (14)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_14_END (14)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_15_START (15)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_15_END (15)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_16_START (16)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_16_END (16)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_17_START (17)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_17_END (17)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_18_START (18)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_18_END (18)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_19_START (19)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_19_END (19)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_20_START (20)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_20_END (20)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_21_START (21)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_21_END (21)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_22_START (22)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_22_END (22)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_23_START (23)
#define SOC_PMCTRL_VDDC_MEM_VOTE_SFT_CHG_BYPASS_vddc_mem_vote_sft_chg_bypass_23_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int vddc_mem_pmu_up_hold_time : 20;
        unsigned int vddc_mem_pmu_up_step_time : 12;
    } reg;
} SOC_PMCTRL_VDDC_MEM_PMU_TRIM_UP_TIME_UNION;
#endif
#define SOC_PMCTRL_VDDC_MEM_PMU_TRIM_UP_TIME_vddc_mem_pmu_up_hold_time_START (0)
#define SOC_PMCTRL_VDDC_MEM_PMU_TRIM_UP_TIME_vddc_mem_pmu_up_hold_time_END (19)
#define SOC_PMCTRL_VDDC_MEM_PMU_TRIM_UP_TIME_vddc_mem_pmu_up_step_time_START (20)
#define SOC_PMCTRL_VDDC_MEM_PMU_TRIM_UP_TIME_vddc_mem_pmu_up_step_time_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int vddc_mem_pmu_dn_hold_time : 20;
        unsigned int vddc_mem_pmu_dn_step_time : 12;
    } reg;
} SOC_PMCTRL_VDDC_MEM_PMU_TRIM_DN_TTME_UNION;
#endif
#define SOC_PMCTRL_VDDC_MEM_PMU_TRIM_DN_TTME_vddc_mem_pmu_dn_hold_time_START (0)
#define SOC_PMCTRL_VDDC_MEM_PMU_TRIM_DN_TTME_vddc_mem_pmu_dn_hold_time_END (19)
#define SOC_PMCTRL_VDDC_MEM_PMU_TRIM_DN_TTME_vddc_mem_pmu_dn_step_time_START (20)
#define SOC_PMCTRL_VDDC_MEM_PMU_TRIM_DN_TTME_vddc_mem_pmu_dn_step_time_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int vddc_mem_vol_sft_clr_0 : 1;
        unsigned int vddc_mem_vol_sft_clr_1 : 1;
        unsigned int vddc_mem_vol_sft_clr_2 : 1;
        unsigned int vddc_mem_vol_sft_clr_3 : 1;
        unsigned int vddc_mem_vol_sft_clr_4 : 1;
        unsigned int vddc_mem_vol_sft_clr_5 : 1;
        unsigned int vddc_mem_vol_sft_clr_6 : 1;
        unsigned int vddc_mem_vol_sft_clr_7 : 1;
        unsigned int vddc_mem_vol_sft_clr_8 : 1;
        unsigned int vddc_mem_vol_sft_clr_9 : 1;
        unsigned int vddc_mem_vol_sft_clr_10 : 1;
        unsigned int vddc_mem_vol_sft_clr_11 : 1;
        unsigned int vddc_mem_vol_sft_clr_12 : 1;
        unsigned int vddc_mem_vol_sft_clr_13 : 1;
        unsigned int vddc_mem_vol_sft_clr_14 : 1;
        unsigned int vddc_mem_vol_sft_clr_15 : 1;
        unsigned int vddc_mem_vol_sft_clr_16 : 1;
        unsigned int vddc_mem_vol_sft_clr_17 : 1;
        unsigned int vddc_mem_vol_sft_clr_18 : 1;
        unsigned int vddc_mem_vol_sft_clr_19 : 1;
        unsigned int vddc_mem_vol_sft_clr_20 : 1;
        unsigned int vddc_mem_vol_sft_clr_21 : 1;
        unsigned int vddc_mem_vol_sft_clr_22 : 1;
        unsigned int vddc_mem_vol_sft_clr_23 : 1;
        unsigned int reserved : 8;
    } reg;
} SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_UNION;
#endif
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_0_START (0)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_0_END (0)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_1_START (1)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_1_END (1)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_2_START (2)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_2_END (2)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_3_START (3)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_3_END (3)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_4_START (4)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_4_END (4)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_5_START (5)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_5_END (5)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_6_START (6)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_6_END (6)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_7_START (7)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_7_END (7)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_8_START (8)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_8_END (8)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_9_START (9)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_9_END (9)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_10_START (10)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_10_END (10)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_11_START (11)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_11_END (11)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_12_START (12)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_12_END (12)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_13_START (13)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_13_END (13)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_14_START (14)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_14_END (14)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_15_START (15)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_15_END (15)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_16_START (16)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_16_END (16)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_17_START (17)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_17_END (17)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_18_START (18)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_18_END (18)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_19_START (19)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_19_END (19)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_20_START (20)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_20_END (20)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_21_START (21)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_21_END (21)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_22_START (22)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_22_END (22)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_23_START (23)
#define SOC_PMCTRL_VDDC_MEM_VOL_SFT_CLR_vddc_mem_vol_sft_clr_23_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int vddc_mem_vol_stable_0 : 1;
        unsigned int vddc_mem_vol_stable_1 : 1;
        unsigned int vddc_mem_vol_stable_2 : 1;
        unsigned int vddc_mem_vol_stable_3 : 1;
        unsigned int vddc_mem_vol_stable_4 : 1;
        unsigned int vddc_mem_vol_stable_5 : 1;
        unsigned int vddc_mem_vol_stable_6 : 1;
        unsigned int vddc_mem_vol_stable_7 : 1;
        unsigned int vddc_mem_vol_stable_8 : 1;
        unsigned int vddc_mem_vol_stable_9 : 1;
        unsigned int vddc_mem_vol_stable_10 : 1;
        unsigned int vddc_mem_vol_stable_11 : 1;
        unsigned int vddc_mem_vol_stable_12 : 1;
        unsigned int vddc_mem_vol_stable_13 : 1;
        unsigned int vddc_mem_vol_stable_14 : 1;
        unsigned int vddc_mem_vol_stable_15 : 1;
        unsigned int vddc_mem_vol_stable_16 : 1;
        unsigned int vddc_mem_vol_stable_17 : 1;
        unsigned int vddc_mem_vol_stable_18 : 1;
        unsigned int vddc_mem_vol_stable_19 : 1;
        unsigned int vddc_mem_vol_stable_20 : 1;
        unsigned int vddc_mem_vol_stable_21 : 1;
        unsigned int vddc_mem_vol_stable_22 : 1;
        unsigned int vddc_mem_vol_stable_23 : 1;
        unsigned int reserved : 8;
    } reg;
} SOC_PMCTRL_VDDC_MEM_VOL_STABLE_UNION;
#endif
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_0_START (0)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_0_END (0)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_1_START (1)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_1_END (1)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_2_START (2)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_2_END (2)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_3_START (3)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_3_END (3)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_4_START (4)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_4_END (4)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_5_START (5)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_5_END (5)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_6_START (6)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_6_END (6)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_7_START (7)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_7_END (7)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_8_START (8)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_8_END (8)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_9_START (9)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_9_END (9)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_10_START (10)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_10_END (10)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_11_START (11)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_11_END (11)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_12_START (12)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_12_END (12)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_13_START (13)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_13_END (13)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_14_START (14)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_14_END (14)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_15_START (15)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_15_END (15)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_16_START (16)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_16_END (16)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_17_START (17)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_17_END (17)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_18_START (18)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_18_END (18)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_19_START (19)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_19_END (19)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_20_START (20)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_20_END (20)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_21_START (21)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_21_END (21)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_22_START (22)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_22_END (22)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_23_START (23)
#define SOC_PMCTRL_VDDC_MEM_VOL_STABLE_vddc_mem_vol_stable_23_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int vddc_mem_init_vol_idx : 8;
        unsigned int vddc_mem_init_vol_req : 1;
        unsigned int reserved : 23;
    } reg;
} SOC_PMCTRL_VDDC_MEM_INIT_VOL_CONFIG_UNION;
#endif
#define SOC_PMCTRL_VDDC_MEM_INIT_VOL_CONFIG_vddc_mem_init_vol_idx_START (0)
#define SOC_PMCTRL_VDDC_MEM_INIT_VOL_CONFIG_vddc_mem_init_vol_idx_END (7)
#define SOC_PMCTRL_VDDC_MEM_INIT_VOL_CONFIG_vddc_mem_init_vol_req_START (8)
#define SOC_PMCTRL_VDDC_MEM_INIT_VOL_CONFIG_vddc_mem_init_vol_req_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int vddc_mem_sft_fix_vol_idx : 8;
        unsigned int vddc_mem_sft_fix_vol : 1;
        unsigned int vddc_mem_sft_fix_vol_req : 1;
        unsigned int reserved : 22;
    } reg;
} SOC_PMCTRL_VDDC_MEM_FIX_VOL_CONFIG_UNION;
#endif
#define SOC_PMCTRL_VDDC_MEM_FIX_VOL_CONFIG_vddc_mem_sft_fix_vol_idx_START (0)
#define SOC_PMCTRL_VDDC_MEM_FIX_VOL_CONFIG_vddc_mem_sft_fix_vol_idx_END (7)
#define SOC_PMCTRL_VDDC_MEM_FIX_VOL_CONFIG_vddc_mem_sft_fix_vol_START (8)
#define SOC_PMCTRL_VDDC_MEM_FIX_VOL_CONFIG_vddc_mem_sft_fix_vol_END (8)
#define SOC_PMCTRL_VDDC_MEM_FIX_VOL_CONFIG_vddc_mem_sft_fix_vol_req_START (9)
#define SOC_PMCTRL_VDDC_MEM_FIX_VOL_CONFIG_vddc_mem_sft_fix_vol_req_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int vddc_mem_cur_max_vol : 8;
        unsigned int vddc_mem_nxt_max_vol : 8;
        unsigned int vddc_mem_cur_max_vol_hst_0 : 8;
        unsigned int vddc_mem_cur_max_vol_hst_1 : 8;
    } reg;
} SOC_PMCTRL_VDDC_MEM_VOL_READ_UNION;
#endif
#define SOC_PMCTRL_VDDC_MEM_VOL_READ_vddc_mem_cur_max_vol_START (0)
#define SOC_PMCTRL_VDDC_MEM_VOL_READ_vddc_mem_cur_max_vol_END (7)
#define SOC_PMCTRL_VDDC_MEM_VOL_READ_vddc_mem_nxt_max_vol_START (8)
#define SOC_PMCTRL_VDDC_MEM_VOL_READ_vddc_mem_nxt_max_vol_END (15)
#define SOC_PMCTRL_VDDC_MEM_VOL_READ_vddc_mem_cur_max_vol_hst_0_START (16)
#define SOC_PMCTRL_VDDC_MEM_VOL_READ_vddc_mem_cur_max_vol_hst_0_END (23)
#define SOC_PMCTRL_VDDC_MEM_VOL_READ_vddc_mem_cur_max_vol_hst_1_START (24)
#define SOC_PMCTRL_VDDC_MEM_VOL_READ_vddc_mem_cur_max_vol_hst_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int vddc_mem_pmu_vol_idx_spmi : 8;
        unsigned int vddc_mem_pmu_vol_chg_spmi : 1;
        unsigned int vddc_mem_pmu_vol_ack_spmi : 1;
        unsigned int reserved_0 : 2;
        unsigned int vddc_mem_cur_vau_stat : 3;
        unsigned int reserved_1 : 17;
    } reg;
} SOC_PMCTRL_VDDC_MEM_DVS_OUTPUT_READ_UNION;
#endif
#define SOC_PMCTRL_VDDC_MEM_DVS_OUTPUT_READ_vddc_mem_pmu_vol_idx_spmi_START (0)
#define SOC_PMCTRL_VDDC_MEM_DVS_OUTPUT_READ_vddc_mem_pmu_vol_idx_spmi_END (7)
#define SOC_PMCTRL_VDDC_MEM_DVS_OUTPUT_READ_vddc_mem_pmu_vol_chg_spmi_START (8)
#define SOC_PMCTRL_VDDC_MEM_DVS_OUTPUT_READ_vddc_mem_pmu_vol_chg_spmi_END (8)
#define SOC_PMCTRL_VDDC_MEM_DVS_OUTPUT_READ_vddc_mem_pmu_vol_ack_spmi_START (9)
#define SOC_PMCTRL_VDDC_MEM_DVS_OUTPUT_READ_vddc_mem_pmu_vol_ack_spmi_END (9)
#define SOC_PMCTRL_VDDC_MEM_DVS_OUTPUT_READ_vddc_mem_cur_vau_stat_START (12)
#define SOC_PMCTRL_VDDC_MEM_DVS_OUTPUT_READ_vddc_mem_cur_vau_stat_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union {
    unsigned int value;
    struct {
        unsigned int vddc_mem_spmi_hold_time : 20;
        unsigned int vddc_mem_spmi_timeout_bypass : 1;
        unsigned int reserved : 11;
    } reg;
} SOC_PMCTRL_VDDC_MEM_SPMI_HOLD_TIME_UNION;
#endif
#define SOC_PMCTRL_VDDC_MEM_SPMI_HOLD_TIME_vddc_mem_spmi_hold_time_START (0)
#define SOC_PMCTRL_VDDC_MEM_SPMI_HOLD_TIME_vddc_mem_spmi_hold_time_END (19)
#define SOC_PMCTRL_VDDC_MEM_SPMI_HOLD_TIME_vddc_mem_spmi_timeout_bypass_START (20)
#define SOC_PMCTRL_VDDC_MEM_SPMI_HOLD_TIME_vddc_mem_spmi_timeout_bypass_END (20)
#ifdef __cplusplus
#if __cplusplus
    }
#endif
#endif
#endif
